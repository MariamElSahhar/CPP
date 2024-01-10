/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:35:32 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 22:46:45 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* horde = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return (horde);
}