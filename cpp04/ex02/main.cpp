/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:12:12 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/27 18:58:23 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	// const Animal* cat = new Animal();
	// const Animal *cat = new Cat();
	// const Cat *cat = new Cat();

	cat->makeSound();

	delete cat;
	return (0);
}
