/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:04:09 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/24 18:05:40 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string n) : ClapTrap(n) {
    std::cout << "ScavTrap " << _name << " created" << std::endl;
    _hit = 50;
    _energy = 100;
    _attack = 20;
}

ScavTrap::~ScavTrap () {
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}


void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " in Gate keeper mode 💂🏽" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energy == 0)
        std::cout << "ScavTrap " << _name << " is out of energy 😵‍💫" << std::endl;
    else {
        std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack << " damage 😈" << std::endl;
        _energy--;
    }
}