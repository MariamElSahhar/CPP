/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:28:23 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/19 22:33:00 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argv, char **argc) {
    Harl harl;
    if (argv != 2)
        return (1);
    harl.complain(argc[1]);
    return (0);
}