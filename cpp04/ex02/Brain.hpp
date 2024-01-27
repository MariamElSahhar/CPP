/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:57:23 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 21:03:20 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    protected:
        std::string _ideas [100];

    public:
        Brain ();
		~Brain ();
		Brain (Brain const &a);
		Brain operator=(Brain const &a);
};

#endif