/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 21:06:55 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () {
	std::cout << "Dog constructor called." << std::endl;
	_type = "dog";
	_brain = new Brain();
}

Dog::~Dog () {
	std::cout << "Dog destructor called." << std::endl;
	delete _brain;
}

Dog::Dog (Dog const &a) : Animal(a) {
	if (&a != this) {
		*this = a;
		_brain = a._brain;
	}
}

Dog Dog::operator=(Dog const &a) {
	if (&a != this) {
		_type = a._type;
		_brain = a._brain;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "bark 🐶" << std::endl;
}