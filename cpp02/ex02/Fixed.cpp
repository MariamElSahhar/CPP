 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:26 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/23 15:52:29 by melsahha         ###   ########.fr       */
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


Fixed Fixed::operator=(Fixed const& f) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        _value = f._value;
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

bool Fixed::operator==(const Fixed& comp) const {
    return (_value == comp._value);
}

bool Fixed::operator!=(const Fixed& comp) const {
    return (_value != comp._value);
}

bool Fixed::operator>(const Fixed& comp) const {
    return (_value > comp._value);
}

bool Fixed::operator>=(const Fixed& comp) const {
    return (_value > comp._value);
}

bool Fixed::operator<(const Fixed& comp) const {
    return (_value < comp._value);
}

bool Fixed::operator<=(const Fixed& comp) const {
    return (_value <= comp._value);
}

Fixed Fixed::operator+(const Fixed& op) const {
    Fixed result;
    result.setRawBits(_value + op._value);
    return (result);
}

Fixed Fixed::operator-(const Fixed& op) const {
    Fixed result;
    result.setRawBits(_value - op._value);
    return (result);
}

Fixed Fixed::operator*(const Fixed& op) const {
    Fixed result;
    result.setRawBits((_value * op._value) >> _fractionalBits);
    return (result);
}

Fixed Fixed::operator/(const Fixed& op) const {
    Fixed result;
    result.setRawBits((_value << _fractionalBits) / op._value);
    return (result);
}

Fixed Fixed::operator++() {
    ++_value;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++_value;
    return temp;
}

Fixed Fixed::operator--() {
    --_value;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --_value;
    return temp;
}

const Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a < b) ? b : a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a < b) ? b : a;
}
