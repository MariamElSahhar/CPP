/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:25:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:16:09 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal () : _type("animal") {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal (std::string type) : _type(type) {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal () {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal (Animal const &a) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = a;
}

Animal& Animal::operator=(Animal const &a) {
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this != &a) {
		this->_type = a._type;
	}
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "*Generic animal sounds*" << std::endl;
}

std::string Animal::getType() const{
	return (_type);
}
