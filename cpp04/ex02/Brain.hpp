/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:57:23 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/28 14:20:49 by melsahha         ###   ########.fr       */
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
		Brain& operator=(Brain const &a);
};

#endif
