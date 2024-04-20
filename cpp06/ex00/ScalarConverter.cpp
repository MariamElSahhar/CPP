/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:19:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/20 18:09:12 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called." << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &s)
{
	(void)s;
	std::cout << "ScalarConverter copy constructor called." << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &s)
{
	std::cout << "ScalarConverter copy assignement constructor called." << std::endl;
	(void)s;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called." << std::endl;
}

int whatNumber(std::string s)
{
	if (s.length() == 1 && std::isalpha(s[0]))
		return (CHAR);
	int i = 0;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	if (s[i] && !isdigit(s[i]))
		return (0);
	while (s[i] && isdigit(s[i]))
		i++;
	if (!s[i])
		return (INTEGER);
	else if (s[i] && s[i] != '.' && s[i] != 'f')
		return (0);
	else if (s[i] && s[i] == '.')
	{
		i++;
		if (!s[i] || (s[i] && !isdigit(s[i])))
			return (0);
		while (s[i] && isdigit(s[i]))
			i++;
		if (!s[i])
			return (DOUBLE);
		else if (s[i] && s[i] != 'f')
			return (0);
		else if (s[i] && s[i] == 'f')
			i++;
		if (s[i])
			return (0);
		else
			return (FLOAT);
	}
	else
		return (0);
}

int ScalarConverter::converttoInt(std::string s)
{
	if (isInt(s))
		return (std::stoi(s));
	else if (isDouble(s))
		return (static_cast<int>(std::stod(s)));
	else if (isFloat(s))
		return (static_cast<int>(std::stof(s)));
	else if (s.length() == 1 && (isalpha(s[0]) || ispunct(s[0]) || s[0] == ' '))
		return (static_cast<int>(s[0]));
	else
		return (0);
}

int ScalarConverter::isInt(std::string s)
{
	int i = 0;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i] && isdigit(s[i]))
		i++;
	if (s[i] && !isdigit(s[i]))
		return (0);
	try
	{
		std::stoi(s);
		return (1);
	}
	catch (...)
	{
		return (-1);
	}
	return (0);
}

int ScalarConverter::isDouble(std::string s)
{
	int i = 0;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i] && isdigit(s[i]))
		i++;
	if (!s[i] || (s[i] && s[i] != '.'))
		return (0);
	else if (s[i] && s[i] == '.')
	{
		i++;
		if (!s[i] || (s[i] && !isdigit(s[i])))
			return (0);
		while (s[i] && isdigit(s[i]))
			i++;
		if (!s[i])
		{
			try
			{
				std::stod(s);
				return (1);
			}
			catch (...)
			{
				return (-1);
			}
		}
	}
	return (0);
}

int ScalarConverter::isFloat(std::string s)
{
	size_t i = 0;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i] && isdigit(s[i]))
		i++;
	if (!s[i] || (s[i] && s[i] != '.'))
		return (0);
	else if (s[i] && s[i] == '.')
	{
		i++;
		if (!s[i] || (s[i] && !isdigit(s[i])))
			return (0);
		while (s[i] && isdigit(s[i]))
			i++;
		if (s[i] && s[i] == 'f' && i == (s.length() - 1))
		{
			try
			{
				std::stof(s);
				return (1);
			}
			catch (...)
			{
				return (-1);
			}
		}
	}
	return (0);
}

bool ScalarConverter::isChar(std::string s)
{
	return (s.length() == 1 && (isalpha(s[0]) || ispunct(s[0]) || s[0] == ' '));
}

void ScalarConverter::printChar(std::string s)
{
	std::cout << "char: ";
	if (isChar(s))
		std::cout << s[0];
	else if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		std::cout << "impossible";
	else if ((isInt(s) == 1) && (std::stoi(s) > 0 && std::stoi(s) < 33))
		std::cout << "Non displayable";
	else if ((isInt(s) == 1) && (std::stoi(s) > 32 && std::stoi(s) < 127))
		std::cout << static_cast<char>(std::stoi(s));
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

void ScalarConverter::printInt(std::string s)
{
	std::cout << "int: ";
	if (isChar(s))
		std::cout << static_cast<int>(s[0]);
	else if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		std::cout << "impossible";
	else if (isInt(s) == 1)
		std::cout << std::stoi(s);
	else if (isInt(s) == -1 || isDouble(s) == -1 || isFloat(s) == -1)
		std::cout << "overflow";
	else if (isDouble(s) == 1 || isFloat(s) == 1)
	{
		try
		{
			std::cout <<std::stoi(s);
		}
		catch (...)
		{
			std::cout << "overflow";
		}
	}
	else
		std::cout << "nan";
	std::cout << std::endl;
}

void ScalarConverter::printFloat(std::string s)
{
	std::cout << "float: ";
	if (s == "nan" || s == "inf" || s == "-inf")
		std::cout << s << "f";
	else if (s == "+inf" || s == "+inff")
		std::cout << "inff";
	else if (s == "inff" || s == "-inff")
		std::cout << s;
	else if (isInt(s) != 0)
	{
		try
		{
			std::stof(s);
			std::cout << s << ".0f";
		}
		catch (...)
		{
			std::cout << "overflow";
		}
	}
	else if (isDouble(s) != 0)
	{
		try
		{
			std::stof(s);
			std::cout << s << "f";
		}
		catch (...)
		{
			std::cout << "overflow";
		}
	}
	else if (isFloat(s) == 1)
		std::cout << s;
	else if (isFloat(s) == -1)
		std::cout << "overflow";
	else if (isChar(s))
		std::cout << static_cast<int>(s[0]) << ".0f";
	else
		std::cout << "nan";
	std::cout << std::endl;
}

void ScalarConverter::printDouble(std::string s)
{
	std::cout << "double: ";
	if (s == "nan" || s == "inf" || s == "-inf")
		std::cout << s;
	else if (s == "+inf" || s == "inff" || s == "+inff")
		std::cout << "inf";
	else if (s == "-inff")
		std::cout << "-inf";
	else if (isInt(s) != 0)
	{
		try
		{
			std::stod(s);
			std::cout << s << ".0";
		}
		catch (...)
		{
			std::cout << "overflow";
		}
	}
	else if (isDouble(s) == 1)
		std::cout << s;
	else if (isDouble(s) == -1)
		std::cout << "overflow";
	else if (isFloat(s) != 0)
	{
		try
		{
			std::stod(s);
			std::cout << s.substr(0, s.length() - 1);
		}
		catch (...)
		{
			std::cout << "overflow";
		}
	}
	else if (isChar(s))
		std::cout << static_cast<int>(s[0]) << ".0";
	else
		std::cout << "nan";
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	printChar(s);
	printInt(s);
	printFloat(s);
	printDouble(s);
}
