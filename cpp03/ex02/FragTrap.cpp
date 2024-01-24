/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:09:45 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/24 18:12:39 by melsahha         ###   ########.fr       */
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

void FragTrap::highFiveGuys() {
    std::cout << "slay. high five guys ✋🏼" << std::endl;
}