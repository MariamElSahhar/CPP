/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:26:06 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/19 22:38:03 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << std::endl << "--------debug---------" << std::endl << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl << "--------info---------" << std::endl << std::endl;
    harl.complain("INFO");
    std::cout << std::endl << "--------warning---------" << std::endl << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl << "--------error---------" << std::endl << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl << "--------other---------" << std::endl << std::endl;
    harl.complain("COMPLIMENT");
}