/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:25:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 20:08:17 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () : _type("WrongAnimal") {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal () {
	std::cout << "WrongAnimal desctructor called." << std::endl;
}

WrongAnimal::WrongAnimal (WrongAnimal const &a) {
	if (&a != this) {
		*this = a;
	}
}

WrongAnimal WrongAnimal::operator=(WrongAnimal const &a) {
	if (&a != this) {
		_type = a._type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "*Generic WrongAnimal sounds*" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (_type);
}
