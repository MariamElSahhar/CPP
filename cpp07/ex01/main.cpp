/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:17:10 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/31 21:27:24 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"

template <typename T>
void testPrint(T &el)
{
	std::cout << el << std::endl;
}

int main(void)
{
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Integer Array:\n";
	iter(intArray, intArrayLength, testPrint<int>);
	std::cout << std::endl;

	// Test with a double array
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

	std::cout << "Double Array:\n";
	iter(doubleArray, doubleArrayLength, testPrint<double>);
	std::cout << std::endl;

	char str[] = "hello!";
	size_t strLen = sizeof(str) / sizeof(str[0]);

	std::cout << "String:\n";
	iter(str, strLen, testPrint<char>);
	std::cout << std::endl;
	return (0);
}
