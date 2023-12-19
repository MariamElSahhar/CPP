/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:04:40 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:46:32 by melsahha         ###   ########.fr       */
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
            Zombie();
            Zombie(std::string n);
            ~Zombie();

            void    announce(void);
            void    setName(std::string n);
    };

    Zombie* zombieHorde( int N, std::string name );

#endif