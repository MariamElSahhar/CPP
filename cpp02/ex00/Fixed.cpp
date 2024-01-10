/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:26 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/04 14:24:46 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &f) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed Fixed::operator=(Fixed const& f) {
    std::cout << "Copy operator called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "Get Raw Bits called" << std::endl;
    

    
}

void Fixed::setRawBits(int const raw) {
    std::cout << "Set Raw Bits called" << std::endl;
}