/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:29:57 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/31 22:17:11 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Array.hpp"

int main(void)
{
	Array<int> arr1(5);
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;
	arr1[3] = 40;
	arr1[4] = 50;

	// Copy constructor test
	Array<int> arr2 = arr1;

	// Assignment operator test
	Array<int> arr3;
	arr3 = arr1;

	// Modify original array
	arr1[0] = 100;

	// // Display elements of all arrays
	std::cout << "arr1: ";
	for (size_t i = 0; i < arr1.size(); ++i) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "arr2: ";
	for (size_t i = 0; i < arr2.size(); ++i) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "arr3: ";
	for (size_t i = 0; i < arr3.size(); ++i) {
		std::cout << arr3[i] << " ";
	}
	std::cout << std::endl;

	return (0);
}
