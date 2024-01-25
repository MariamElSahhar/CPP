/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:04:09 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:22:10 by melsahha         ###   ########.fr       */
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

ScavTrap &ScavTrap::operator=(ScavTrap const &ct) {
	std::cout << "ScavTrap copy assinment operator called." << std::endl;
	if (this != &ct) {
		_name = ct._name;
		_attack = ct._attack;
		_energy = ct._energy;
		_hit = ct._hit;
	}
	else
		return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &ct) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
	_name = ct._name;
	_attack = ct._attack;
	_hit = ct._hit;
	_energy = ct._energy;
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
