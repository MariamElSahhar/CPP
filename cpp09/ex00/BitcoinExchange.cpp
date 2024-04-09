/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:22 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/09 17:55:58 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string dataFile) : _dataFile(dataFile)
{
	std::ifstream dataStream(dataFile);
	if (!dataStream.is_open())
		throw CannotOpenDataFile();
	getDataMap(dataStream);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
	_data = rhs._data;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		_data = rhs._data;
	}
	return (*this);
}

void BitcoinExchange::getDataMap(std::ifstream& dataStream)
{
	std::string line;
	std::pair<std::string, double> entry;
	int	i = -1;

	if(std::getline(dataStream, line) && line != "date,exchange_rate")
	{
		throw DataFileException();
		i++;
	}
	while (std::getline(dataStream, line))
	{
		std::string date = line.substr(0, 10);
		double value = stod(line.substr(11));
		_data.insert(std::make_pair(date, value));
		i++;
	}
	if (i < 1)
		throw DataFileException();
}

bool BitcoinExchange::validDate(std::string date)
{
	for (int i = 0; i < (int) date.length(); i++)
	{
		if ((i == 4 || i == 7) && date[i] != '-')
			return (false);
		else if (!(i == 4 || i == 7) && !std::isdigit(date[i]))
			return (false);
	}
	int	year = stoi(date.substr(0, 4));
	int	month = stoi(date.substr(5, 2));
	int	day = stoi(date.substr(8));
	if (month < 1 || month > 12)
		return (false);
	if (day < 1)
		return (false);
	if (month == 2)
	{
		if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			if (day > 29)
				return (false);
		}
		else if (day > 28)
			return (false);
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11)
		&& day > 30)
		return (false);
	else if (day > 31)
		return (false);
	return (true);
}


bool BitcoinExchange::validValue(std::string val)
{
	bool	decimal = false;
	if (val.empty())
		return (false);
	for (size_t i = 0; i < val.length(); i++)
	{
		if (i == 0 && !(val[i] == '-') && !std::isdigit(val[i]))
			return (false);
		else if (i > 0)
		{
			if (val[i] == '.')
			{
				if (decimal || i == 0 || i == val.length() - 1)
					return (false);
				decimal = true;
			}
			else if (!std::isdigit(val[i]))
				return (false);
		}
	}
	return (true);
}

bool BitcoinExchange::dateLessThan(std::string lhs, std::string rhs)
{
	int	lhs_year = stoi(lhs.substr(0, 4));
	int	rhs_year = stoi(rhs.substr(0, 4));
	if (lhs_year < rhs_year)
		return (true);
	else if (lhs_year > rhs_year)
		return (false);

	int	lhs_month = stoi(lhs.substr(5, 2));
	int	rhs_month = stoi(rhs.substr(5, 2));
	if (lhs_month < rhs_month)
		return (true);
	else if (lhs_month > rhs_month)
		return (false);

	int	lhs_day = stoi(lhs.substr(8));
	int	rhs_day = stoi(rhs.substr(8));
	return (lhs_day < rhs_day);
}

double BitcoinExchange::findRate(std::string date)
{
	std::map<std::string, double>::iterator it = _data.find(date);
	if (it != _data.end())
		return (it->second);
	else
	{
		it = _data.begin();
		if (BitcoinExchange::dateLessThan(date, it->first))
			return (0);
		while (it != _data.end() && BitcoinExchange::dateLessThan(it->first, date))
			it ++;
		return ((--it)->second);
	}
}


void BitcoinExchange::calcValue(std::string inputFile)
{
	std::ifstream inputStream(inputFile);
	if (!inputStream.is_open())
		throw CannotOpenInputFile();
	std::string line;
	if(std::getline(inputStream, line) && line != "date | value")
		throw InputFileException();
	while (std::getline(inputStream, line))
	{
		if (line.length() < 14)
			std::cout << "Error: bad input => " << line << std::endl;
		else
		{
			std::string date = line.substr(0, 10);
			std::string delim = line.substr(10, 3);
			std::string valStr = line.substr(13);
			if (!BitcoinExchange::validDate(date) || delim != " | " || !validValue(valStr))
				std::cout << "Error: bad input => " << line << std::endl;
			else
			{
				double val = stod(valStr);
				if (val <= 0)
					std::cout << "Error: not a positive number" << std::endl;
				else if (val >= 1000 )
					std::cout << "Error: too large a number" << std::endl;
				else
				{
					double rate = findRate(date);
					double res = val * rate;
					std::cout << date << " => " << val << " = " << res << std::endl;
				}
			}
		}
	}
}
