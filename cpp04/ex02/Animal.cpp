/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:25:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/27 18:29:06 by melsahha         ###   ########.fr       */
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

Animal& Animal::operator=(Animal const &a) {
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

std::string Animal::getType() const{
	return (_type);
}
