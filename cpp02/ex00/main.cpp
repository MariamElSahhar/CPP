/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:56:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/02/01 18:07:22 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b( a );
    Fixed c;

	std::cout << std::endl;
    c = b;

	std::cout << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl;
	a.setRawBits(22);
	c.setRawBits(2);

	std::cout << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl;
    return 0;
}
