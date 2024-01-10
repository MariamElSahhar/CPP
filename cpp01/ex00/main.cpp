/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:01:37 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:28:45 by melsahha         ###   ########.fr       */
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
    
    delete peashooter;
    delete repeater;
}