/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:06:42 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 19:24:40 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    Harl::debug( void ) {
    std::cout << "[DEBUG]" << std::endl <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do! 🤨" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! 😠" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. 😡" << std::endl;
}

void    Harl::error( void ) {
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now. 🤬" << std::endl;
}

void    Harl::complain( std::string level ) {
    int level_num;
    void (Harl::*fun[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error} ;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    level_num = 0;
    while (levels[level_num] != level && level_num < 4)
        level_num++;

    switch (level_num)
    {
        default:
            std::cout << "[angry muttering]" << std::endl;
            break;
        case 0:
            (this->*fun[0])();
            (this->*fun[1])();
            (this->*fun[2])();
            (this->*fun[3])();
			break;
        case 1:
            (this->*fun[1])();
            (this->*fun[2])();
            (this->*fun[3])();
			break;
        case 2:
            (this->*fun[2])();
            (this->*fun[3])();
			break;
        case 3:
            (this->*fun[3])();
			break;
    }
}
