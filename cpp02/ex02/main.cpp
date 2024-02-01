/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:04:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/02/01 18:16:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
    Fixed		a;
    Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;
    std::cout << ++a << std::endl;
	std::cout << std::endl;
    std::cout << a << std::endl;
	std::cout << std::endl;
    std::cout << a++ << std::endl;
	std::cout << std::endl;
    std::cout << a << std::endl;
	std::cout << std::endl;
    std::cout << b << std::endl;
	std::cout << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;
	Fixed c = a + b;
	std::cout << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;
	std::cout << Fixed::min (b , a) << std::endl;
	std::cout << std::endl;
    return 0;
}
