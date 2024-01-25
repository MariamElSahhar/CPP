/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:39:32 by melsahha         ###   ########.fr       */
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

void Dog::makeSound() {
	std::cout << "bark 🐶" << std::endl;
}
