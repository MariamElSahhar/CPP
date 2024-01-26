/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:04:56 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 18:40:49 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "zombie born" <<std::endl;
}

Zombie::Zombie(std::string n) : name(n) {
    std::cout << "Zombie " << n << " is created" <<std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string n) {
    this->name = n;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
