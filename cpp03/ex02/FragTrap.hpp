/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:09:24 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:21:52 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
    public:
        FragTrap (std::string n);
        ~FragTrap();
		FragTrap (FragTrap const &ct);
		FragTrap& operator=(FragTrap const &ct);

        void highFiveGuys();
};

#endif
