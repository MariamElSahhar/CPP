/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:18:36 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/29 15:27:36 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

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
	static void		printChar(std::string s);
	static void		printInt(std::string s);
	static void		printFloat(std::string s);
	static void		printDouble(std::string s);
	static int		converttoInt(std::string s);
	static float	converttoFloat(std::string s);
	static double	converttoDouble(std::string s);

public:
	static void convert(std::string s);
};

#endif
