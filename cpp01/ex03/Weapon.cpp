/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:56:41 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/12 21:59:33 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{}

std::string Weapon::getType(){
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}