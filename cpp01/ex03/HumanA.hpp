/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:59:47 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/19 21:19:30 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack();
};

#endif