/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:56:41 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/30 20:21:03 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Weapon of type " << type << " created" << std::endl;
}

const std::string& Weapon::getType(){
	return (type);
}

void Weapon::setType(std::string type)
{
	std::cout << "Weapon " << this->type << " set to " << type << std::endl;
    this->type = type;
}
