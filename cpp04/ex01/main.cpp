/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:12:12 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:19:57 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	// std::cout << std::endl << "----creating animal----" << std::endl;
	// const Animal* meta = new Animal();
	// std::cout << std::endl << "----creating dog----" << std::endl;
	// const Animal* dog = new Dog();
	// std::cout << std::endl << "----creating cat----" << std::endl;
	// const Animal* cat = new Cat();

	// std::cout << std::endl << "----destroying----" << std::endl;
	// delete meta;
	// std::cout << std::endl;
	// delete dog;//should not create a leak
	// std::cout << std::endl;
	// delete cat;

	Cat basic;
	std::cout << std::endl;
	{
		Cat tmp;
		std::cout << std::endl;
		tmp = basic;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	Cat copy(basic);
	std::cout << std::endl;

	return 0;
}
