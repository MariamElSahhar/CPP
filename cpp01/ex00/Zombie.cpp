/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:04:56 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:23:25 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n) {}

Zombie::~Zombie() {
    std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}