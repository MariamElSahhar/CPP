/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:26 by melsahha          #+#    #+#             */
/*   Updated: 2024/02/01 18:00:19 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &f) : value(f.value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& f) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->value = f.value;
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "Get Raw Bits called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "Set Raw Bits called" << std::endl;
    value = raw;
}
