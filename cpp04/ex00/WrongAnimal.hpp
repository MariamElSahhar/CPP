/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:13:31 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 20:08:50 by melsahha         ###   ########.fr       */
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
		WrongAnimal operator=(WrongAnimal const &a);

		std::string getType () const;
        void makeSound () const;
};

#endif
