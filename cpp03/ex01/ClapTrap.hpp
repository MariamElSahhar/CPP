/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:55:22 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:19:29 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    public:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _attack;

        ClapTrap (std::string n);
        ~ClapTrap();
		ClapTrap (ClapTrap const &ct);
		ClapTrap& operator=(ClapTrap const &ct);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
