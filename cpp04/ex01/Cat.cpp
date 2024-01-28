/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 13:32:33 by melsahha         ###   ########.fr       */
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

Cat::Cat (Cat const &a) : Animal(a){
	std::cout << "Cat copy constructor called." << std::endl;
	if (&a != this) {
		*this = a;
	}
}

Cat Cat::operator=(Cat const &a) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (&a != this) {
		_type = a._type;
		_brain = a._brain;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
