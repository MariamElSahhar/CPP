/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 20:04:17 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () {
	std::cout << "Cat constructor called." << std::endl;
	_type = "cat";
}

Cat::~Cat () {
	std::cout << "Cat desctructor called." << std::endl;
}

Cat::Cat (Cat const &a) {
	if (&a != this) {
		*this = a;
	}
}

Cat Cat::operator=(Cat const &a) {
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
