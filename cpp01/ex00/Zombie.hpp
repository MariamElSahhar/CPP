/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:04:40 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:26:01 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

    #include <string>
    #include <iostream>

    class Zombie
    {
        private:
            std::string name;
        public:
            Zombie(std::string n);
            ~Zombie();
            
            void    announce(void);
    };

    Zombie* newZombie (std::string name);
    void    randomChump(std::string name);

#endif