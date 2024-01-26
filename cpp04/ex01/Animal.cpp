/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:25:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 21:06:58 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal () : _type("animal") {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal () {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal (Animal const &a) {
	if (&a != this) {
		*this = a;
	}
}

Animal Animal::operator=(Animal const &a) {
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "*Generic animal sounds*" << std::endl;
}

std::string Animal::getType() const{
	return (_type);
}
