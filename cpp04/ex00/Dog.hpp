/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:12:43 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/25 21:41:16 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog ();
		~Dog ();
		Dog (Dog const &a);
		Dog operator=(Dog const &a);

		void makeSound();

};

#endif
