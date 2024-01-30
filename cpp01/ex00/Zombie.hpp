/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:04:40 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/30 19:43:08 by melsahha         ###   ########.fr       */
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
            Zombie(const std::string &n);

            ~Zombie();

            void    announce(void);
    };

    Zombie* newZombie (std::string name);
    void    randomChump(std::string name);

#endif
