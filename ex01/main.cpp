/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:33:14 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:49:32 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
    int num = 3;
    
    Zombie* horde = zombieHorde(num, "peashooter");

    for (int i = 0; i < num; i++)
        horde[i].announce();
    
    delete[] horde;
}