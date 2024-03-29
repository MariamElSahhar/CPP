/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:18:36 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/27 22:01:20 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

enum NumberType
{
	NOTNUM,
	INTEGER,
	DOUBLE,
	FLOAT,
};

class ScalarConverter
{
private:
	static void printChar(std::string s);
	static void converttoInt(std::string s);
	static void converttoFloat(std::string s);
	static void converttoDouble(std::string s);

public:
	// ScalarConverter ();
	// ~ScalarConverter ();
	// ScalarConverter (ScalarConverter const &s);
	// ScalarConverter& operator=(ScalarConverter const &s);
	static void convert(std::string s);
};

#endif
