/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:15:38 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog () : Animal("dog") {
	std::cout << "Dog constructor called." << std::endl;
	_brain = new Brain();
}

Dog::~Dog () {
	std::cout << "Dog destructor called." << std::endl;
	delete _brain;
}

Dog::Dog (Dog const &a) {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = a;
}

Dog& Dog::operator=(Dog const &a) {
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (&a != this) {
		_type = a._type;
		_brain = new Brain (*a._brain);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "bark 🐶" << std::endl;
}
