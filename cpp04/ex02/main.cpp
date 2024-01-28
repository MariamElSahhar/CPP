/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:12:12 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:38:22 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	// Animal cat;
	// const Animal* cat = new Animal();
	std::cout << std::endl << "----constructors----" << std::endl;
	const Cat *cat = new Cat();
	// const Animal *cat2 = new Cat();
	const Cat cat2 (*cat);
	const Dog *dog = new Dog();
	const Dog dog2 (*dog);
	// const Animal *dog2 = new Dog();

	std::cout << std::endl << "----makeSound()----" << std::endl;
	// cat.makeSound();
	cat->makeSound();
	cat2.makeSound();
	dog->makeSound();
	dog2.makeSound();

	std::cout << std::endl << "----destrcturing----" << std::endl;
	delete cat;
	// delete cat2;
	delete dog;
	// delete dog2;
	return (0);
}
