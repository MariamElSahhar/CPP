/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:09:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:30:33 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap (std::string n) : ClapTrap(n) {
    std::cout << "FragTrap " << _name << " created" << std::endl;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}


FragTrap::~FragTrap () {
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &ct) {
	std::cout << "FragTrap copy assinment operator called." << std::endl;
	if (this != &ct) {
		_name = ct._name;
		_attack = ct._attack;
		_energy = ct._energy;
		_hit = ct._hit;
	}
	return (*this);
}

FragTrap::FragTrap(FragTrap const &ct) {
	std::cout << "FragTrap copy constructor called." << std::endl;
	_name = ct._name;
	_attack = ct._attack;
	_hit = ct._hit;
	_energy = ct._energy;
}

void FragTrap::highFiveGuys() {
    std::cout << "slay. high five guys ✋🏼" << std::endl;
}
