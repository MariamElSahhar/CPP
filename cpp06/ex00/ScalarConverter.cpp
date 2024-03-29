/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:19:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/27 22:11:55 by melsahha         ###   ########.fr       */
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
}

void ScalarConverter::printChar(std::string s)
{
	std::cout << "char: ";
	if (s.length() == 1 && isalpha(s[0]))
		std::cout << s[0];
	else if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		std::cout << "impossible";
	else if (whatNumber(s) && )
	else
		std::cout << "Non displayable"
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string s)
{
	printChar(s);
}
