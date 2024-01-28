/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:12:12 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 13:30:18 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	// Animal cat;
	// const Animal* cat = new Animal();
	const Animal *cat = new Cat();
	const Cat *cat2 = new Cat();
	const Animal *dog = new Dog();
	const Dog *dog2 = new Dog();

	// cat.makeSound();
	cat->makeSound();
	cat2->makeSound();
	dog->makeSound();
	dog2->makeSound();

	delete cat;
	delete cat2;
	delete dog;
	delete dog2;
	return (0);
}
