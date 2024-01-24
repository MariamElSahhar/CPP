/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:55:17 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/24 18:12:14 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap a = FragTrap("pano");

    a.attack("chicken");
    a.takeDamage(30);
    a.takeDamage(30);
    a.highFiveGuys();
    
}