/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:12:12 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 13:45:42 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << std::endl << "-----Object Creation-----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << "-----Get Type-----" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl << "-----Make Sound-----" << std::endl;
	dog->makeSound(); //will output the cat sound!
    cat->makeSound();
	meta->makeSound();

	std::cout << std::endl << "-----Destructuring-----" << std::endl;
	delete meta;
	delete dog;
	delete cat;

	std::cout << std::endl << "-----Wrong Animal-----" << std::endl;

    const WrongAnimal *wrong = new WrongCat();
    const WrongCat *wrongcat = new WrongCat();
    wrong->makeSound();
	wrongcat->makeSound();
	delete wrong;
	delete wrongcat;

    return 0;
}
