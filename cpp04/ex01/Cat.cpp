/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:34:01 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:16:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat () : Animal("cat") {
	std::cout << "Cat constructor called." << std::endl;
	_brain = new Brain();
}

Cat::~Cat () {
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

Cat::Cat (Cat const &a) {
	std::cout << "Cat copy constructor called." << std::endl;
	*this = a;
}

Cat& Cat::operator=(Cat const &a) {
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (&a != this) {
		_type = a._type;
		_brain = new Brain (*a._brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow 🐱" << std::endl;
}
