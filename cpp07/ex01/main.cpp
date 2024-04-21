/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:17:10 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/21 16:07:22 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"

template <typename T>
void testPrint(T const &el)
{
	std::cout << el << std::endl;
}

class Awesome {
	public:
	Awesome(void) : _n(42) {return ;}
	int get(void) const {return this->_n;}
	private:
	int _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs) {o << rhs.get();return o;}
template <typename T>
void print(T const & x) {std::cout << x << std::endl; return;}

int main(void)
{
	// Object test
	Awesome tab[5];
	iter(tab, 5, print);
	std::cout << std::endl;

	// Integer test
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Integer Array:\n";
	iter(intArray, intArrayLength, testPrint<int>);
	std::cout << std::endl;

	// Double test
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

	std::cout << "Double Array:\n";
	iter(doubleArray, doubleArrayLength, testPrint<double>);
	std::cout << std::endl;

	// String test
	char str[] = "hello!";
	size_t strLen = sizeof(str) / sizeof(str[0]);

	std::cout << "String:\n";
	iter(str, strLen, testPrint<char>);
	std::cout << std::endl;
	return (0);
}
