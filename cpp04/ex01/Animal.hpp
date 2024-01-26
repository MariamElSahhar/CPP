/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:13:31 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 21:13:09 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string _type;

    public:
        Animal ();
		virtual ~Animal ();
		Animal (Animal const &a);
		Animal operator=(Animal const &a);

		std::string getType () const;
        virtual void makeSound () const;
};

#endif
