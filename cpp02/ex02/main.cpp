/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:04:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 19:37:09 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
	Fixed c = a + b;
	std::cout << c << std::endl;
	std::cout << Fixed::min (b , a) << std::endl;
    return 0;
}
