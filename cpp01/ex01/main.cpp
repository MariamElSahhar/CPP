/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:33:14 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/31 18:12:53 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
	int num = 4;

	std::cout << std::endl << "----Creating horde----" << std::endl;
	Zombie* horde = zombieHorde(num, "peashooter");
	// Zombie* horde1 = zombieHorde(-9, "peashooter");
	// (void)horde1;

	std::cout << std::endl << "----Announce method----" << std::endl;
	for (int i = 0; i < num; i++)
		horde[i].announce();

	std::cout << std::endl << "----Proving pointer is to first zombie----" << std::endl;
	horde->setName("repeater");

	for (int i = 0; i < num; i++)
		horde[i].announce();

	std::cout << std::endl << "----Destrcturing----" << std::endl;
	delete[] horde;
}
