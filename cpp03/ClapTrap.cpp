/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:55:06 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/24 12:27:53 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main () {
    ClapTrap ct = ClapTrap("bob");

    ct.takeDamage(10);
    ct.takeDamage(1);
    ct.beRepaired(3);
    ct.takeDamage(1);
    ct.attack("joe");


    return 0;
}