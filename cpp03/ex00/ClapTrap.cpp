/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:55:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:31:05 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n) : _name(n), _hit(10), _energy(10), _attack(0) {
    std::cout << "ClapTrap called " << _name << " created." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ct) {
	std::cout << "ClapTrap copy assinment operator called." << std::endl;
	if (this != &ct) {
		_name = ct._name;
		_attack = ct._attack;
		_energy = ct._energy;
		_hit = ct._hit;
	}
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &ct) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
	_name = ct._name;
	_attack = ct._attack;
	_hit = ct._hit;
	_energy = ct._energy;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hit == 0)
        std::cout << "ClapTrap " << _name << " is dead 🪦" << std::endl;
    else if (amount >= _hit) {
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage and DIES 💀" << std::endl;
        _hit = 0;
    }
    else {
        std::cout << "ClapTrap " << _name << " takes " << amount << " damage 😵" << std::endl;
        _hit = _hit - amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy == 0)
        std::cout << "ClapTrap " << _name << " is out of energy 😵‍💫" << std::endl;
    else {
        std::cout << "ClapTrap " << _name << " repairs by " << amount << " points" << std::endl;
        _energy--;
        _hit=+amount;
    }
}

void ClapTrap::attack(const std::string& target) {
    if (_energy == 0)
        std::cout << "ClapTrap " << _name << " is out of energy 😵‍💫" << std::endl;
    else {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack << " damage 😈" << std::endl;
        _energy--;
    }
}
