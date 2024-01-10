/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:04:56 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:47:31 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "zombie born" <<std::endl;
}

Zombie::Zombie(std::string n) : name(n) {
    std::cout << n << " born" <<std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " died" << std::endl;
}

void Zombie::setName(std::string n) {
    this->name = n;
}

void Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}