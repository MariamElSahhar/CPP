/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:26 by melsahha          #+#    #+#             */
/*   Updated: 2024/02/01 18:11:46 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : _value(f._value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _value(i << _fractionalBits) {
    std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& f) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        this->_value = f._value;
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "Get Raw Bits called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "Set Raw Bits called" << std::endl;
    _value = raw;
}

int Fixed::toInt(void) const {
    std::cout << "Converting to int" << std::endl;
    return (_value >> _fractionalBits);
}

float Fixed::toFloat(void) const {
    std::cout << "Converting to float" << std::endl;
    return((float)_value / (1 << _fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return os;
}
