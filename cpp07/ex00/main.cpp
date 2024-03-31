/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:14:39 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/31 16:15:36 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

#include "whatever.hpp"

int main() {
	int x = 5, y = 10;
	std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
	swap(x, y);
	std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

	double a = 3.5, b = 2.8;
	std::cout << "Minimum of " << a << " and " << b << " is: " << min(a, b) << std::endl;
	std::cout << "Maximum of " << a << " and " << b << " is: " << max(a, b) << std::endl;

	return 0;
}
