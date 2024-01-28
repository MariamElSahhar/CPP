/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:23:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () {
	std::cout << "Cat constructor called." << std::endl;
	_type = "cat";
}

Cat::~Cat () {
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat (Cat const &a) {
	std::cout << "Cat copy constructor called." << std::endl;
	if (&a != this) {
		*this = a;
	}
}

Cat& Cat::operator=(Cat const &a) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
