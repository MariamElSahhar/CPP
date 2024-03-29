/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:19:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/29 15:27:58 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter()
// {
// 	std::cout << "ScalarConverter constructor called." << std::endl;
// }

// ScalarConverter::ScalarConverter( ScalarConverter const &s )
// {
// 	std::cout << "ScalarConverter copy constructor called." << std::endl;
// }

// ScalarConverter&	ScalarConverter::operator=( ScalarConverter const &s ) {
// 	std::cout << "ScalarConverter copy assignement constructor called." << std::endl;
// 	 if ( this != &s )
// 	//  SOMETHING
// 	 return *this;
// }

// ScalarConverter::~ScalarConverter ()
// {
// 	std::cout << "ScalarConverter destructor called." << std::endl;
// }

int	whatNumber(std::string s)
{
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
	int	type = whatNumber(s);

	if (type == INTEGER)
		return (std::stoi(s));
	else if (type == FLOAT)
		return (static_cast<int>(std::stof(s)));
	else if (type == DOUBLE)
		return (static_cast<int>(std::stod(s)));
	else
		return (0);
}

void ScalarConverter::printChar(std::string s)
{
	std::cout << "char: ";
	if (s.length() == 1 && (isalpha(s[0]) || ispunct(s[0]) || s[0] == ' '))
		std::cout << s[0];
	else if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		std::cout << "impossible";
	else if (whatNumber(s) && (converttoInt(s) > 0 && converttoInt(s) < 33))
		std::cout << "Non displayable";
	else if (whatNumber(s) && (converttoInt(s) > 32 && converttoInt(s) < 127))
		std::cout << static_cast<char>(converttoInt(s));
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

void ScalarConverter::printInt(std::string s)
{
	std::cout << "int: ";
	 if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		std::cout << "impossible";
	else if (whatNumber(s))
		std::cout << converttoInt(s);
	else
		std::cout << "nan";
	std::cout << std::endl;
}

void ScalarConverter::printFloat(std::string s)
{
	std::cout << "float: ";
	 if (s == "nan" || s == "inf" || s == "-inf" || s == "+inf")
	 	std::cout << s << "f";
	 if (s == "inff" || s == "+inff" || s == "-inff")
		std::cout << s;
	else if (whatNumber(s) == INTEGER)
		std::cout << converttoInt(s) << ".0f";
	else if (whatNumber(s) == DOUBLE) {
			double d = std::stod(s);
			if (d == static_cast<int>(d)) {
				std::cout << std::fixed << std::setprecision(1) << d << "f";
			} else {
				std::cout << d << "f";
			}
	}
	else if (whatNumber(s) == FLOAT)
		std::cout << s;
	else
		std::cout << "nan";
	std::cout << std::endl;
}

void ScalarConverter::printDouble(std::string s)
{
	std::cout << "double: ";
	 if (s == "nan" || s == "inf" || s == "-inf" || s == "+inf")
	 	std::cout << s;
	 if (s == "inff")
	 	std::cout << "inf";
	 if (s == "+inff" || s == "-inff")
		std::cout << s.substr(0, 3);
	else if (whatNumber(s) == INTEGER)
		std::cout << converttoInt(s) << ".0";
	else if (whatNumber(s) == DOUBLE)
		std::cout << std::stod(s);
	else if (whatNumber(s) == FLOAT)
		std::cout << s.substr(0, s.length() - 1);
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
