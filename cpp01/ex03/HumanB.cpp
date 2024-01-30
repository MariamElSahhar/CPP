/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:59:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/30 20:22:50 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << "HumanB called " << name << " created and unarmed" << std::endl;
}

void HumanB::attack() {
	if (!weapon)
		std::cout << name << " is unarmed" << std::endl;
	else
	    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w) {
    weapon = &w;
	std::cout << "HumanB called " << name << " is armed with " << w.getType() << std::endl;
}
