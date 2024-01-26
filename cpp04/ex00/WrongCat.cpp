/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 20:08:31 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat () {
	std::cout << "WrongCat constructor called." << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat () {
	std::cout << "WrongCat desctructor called." << std::endl;
}

WrongCat::WrongCat (WrongCat const &a) {
	if (&a != this) {
		*this = a;
	}
}

WrongCat WrongCat::operator=(WrongCat const &a) {
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
