/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:01:37 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 18:37:26 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    Zombie zombie("sunflower");
    Zombie* peashooter = newZombie("peashooter");
    Zombie* repeater = new Zombie("repeater");

    zombie.announce();
    peashooter->announce();
    repeater->announce();

	randomChump("wallnut");

    delete peashooter;
    delete repeater;
}
