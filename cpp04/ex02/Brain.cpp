/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:25:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:20:45 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain () {
	std::cout << "Brain constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "💡";
}

Brain::~Brain () {
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain (Brain const &a) {
	std::cout << "Brain copy constructor called." << std::endl;
	if (&a != this) {
		for (int i = 0; i < 100; i++)
            _ideas[i] = a._ideas[i];
	}
}

Brain& Brain::operator=(Brain const &a) {
	std::cout << "Brain assignment operator called." << std::endl;
	if (&a != this) {
        for (int i = 0; i < 100; i++)
            _ideas[i] = a._ideas[i];
	}
	return (*this);
}

