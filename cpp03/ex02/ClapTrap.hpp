/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:55:22 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 19:46:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	protected:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _attack;

    public:
        ClapTrap (std::string n);
        ~ClapTrap();
		ClapTrap (ClapTrap const &ct);
		ClapTrap& operator=(ClapTrap const &ct);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
