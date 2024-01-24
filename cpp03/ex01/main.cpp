/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:55:17 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/24 18:06:37 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap a = ScavTrap("pano");

    a.attack("chicken");
    a.takeDamage(30);
    a.takeDamage(30);
    a.guardGate();
    
}