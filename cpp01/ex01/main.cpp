/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:33:14 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/29 18:01:33 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
	int num = 5;

	Zombie* horde = zombieHorde(num, "peashooter");

	for (int i = 0; i < num; i++)
		horde[i].announce();

	std::cout << std::endl << "----Proving pointer is to first zombie----" << std::endl;
	horde->setName("repeater");

	for (int i = 0; i < num; i++)
		horde[i].announce();

	delete[] horde;
}
