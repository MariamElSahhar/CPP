/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:39:37 by melsahha         ###   ########.fr       */
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

void Cat::makeSound() {
	std::cout << "meow 🐱" << std::endl;
}
