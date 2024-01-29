/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:01:37 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/29 17:53:57 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    {
		std::cout << std::endl << "----Testing zombie class----" << std::endl;
		Zombie zombie("sunflower");
		Zombie* repeater = new Zombie("repeater");
    	zombie.announce();
    	repeater->announce();
	    delete repeater;
    }

	{
		std::cout << std::endl << "----Testing newZombie class----" << std::endl;
		Zombie* peashooter = newZombie("peashooter");
	    peashooter->announce();
	    delete peashooter;
	}


	{
		std::cout << std::endl << "----Testing randomChump class----" << std::endl;
		randomChump("wallnut");
	}
}
