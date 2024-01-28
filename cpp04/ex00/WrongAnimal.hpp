/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:13:31 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:22:49 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _type;

    public:
        WrongAnimal ();
		~WrongAnimal ();
		WrongAnimal (WrongAnimal const &a);
		WrongAnimal& operator=(WrongAnimal const &a);

		std::string getType () const;
        void makeSound () const;
};

#endif
