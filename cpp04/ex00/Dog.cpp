/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 20:00:31 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () {
	std::cout << "Dog constructor called." << std::endl;
	_type = "dog";
}

Dog::~Dog () {
	std::cout << "Dog desctructor called." << std::endl;
}

Dog::Dog (Dog const &a) {
	if (&a != this) {
		*this = a;
	}
}

Dog Dog::operator=(Dog const &a) {
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "bark 🐶" << std::endl;
}
