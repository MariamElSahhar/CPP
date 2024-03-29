/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:44:50 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () {
	std::cout << "Cat constructor called." << std::endl;
	_brain = new Brain();
	_type = "cat";
}

Cat::~Cat () {
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

Cat::Cat (Cat const &a) : Animal(a) {
	std::cout << "Cat copy constructor called." << std::endl;
	if (&a != this) {
		*this = a;
		_brain = new Brain(*a._brain);
	}
}

Cat& Cat::operator=(Cat const &a) {
	std::cout << "Cat assignment operator called." << std::endl;
	if (&a != this) {
		_type = a._type;
		_brain = new Brain (*a._brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
