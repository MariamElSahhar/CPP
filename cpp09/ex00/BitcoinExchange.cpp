/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:21:22 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/02 18:02:58 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::map<std::string, double>* data, std::map<std::string, double>* input) : _data(data), _input(input)
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
	_data = rhs._data;
	_input = rhs._input;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		_data = rhs._data;
		_input = rhs._input;
	}
	return (*this);
}

std::pair<std::string, double> BitcoinExchange::validateDataLine(std::string line)
{
	
}

std::map<std::string, double>* BitcoinExchange::getDataMap(std::ifstream datafile)
{
	std::string line;
	std::pair<std::string, double> entry;
	std::map<std::string, double>* dataMap;

	while (std::getline(datafile, line))
	{
		entry = validateDataLine(line);
		if (entry.second == -1)
			return (0);
		else
			(*dataMap).insert(entry);
	}
	return (dataMap);
}
