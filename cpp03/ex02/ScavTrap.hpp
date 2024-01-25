/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:49:50 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:20:28 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:
    public:
        ScavTrap (std::string n);
        ~ScavTrap();
		ScavTrap (ScavTrap const &ct);
		ScavTrap& operator=(ScavTrap const &ct);

        void guardGate();
        void attack(const std::string& target);
};

#endif
