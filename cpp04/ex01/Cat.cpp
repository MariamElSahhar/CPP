/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 21:06:45 by melsahha         ###   ########.fr       */
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

Cat::Cat (Cat const &a) {
	if (&a != this) {
		*this = a;
		_brain = a._brain;
	}
}

Cat Cat::operator=(Cat const &a) {
	if (&a != this) {
		_type = a._type;
		_brain = a._brain;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
