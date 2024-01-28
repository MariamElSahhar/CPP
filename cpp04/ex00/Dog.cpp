/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:23:03 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () {
	std::cout << "Dog constructor called." << std::endl;
	_type = "dog";
}

Dog::~Dog () {
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog (Dog const &a) {
	std::cout << "Dog copy constructor called." << std::endl;
	if (&a != this) {
		*this = a;
	}
}

Dog& Dog::operator=(Dog const &a) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "bark 🐶" << std::endl;
}
