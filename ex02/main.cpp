/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:50:18 by melsahha          #+#    #+#             */
/*   Updated: 2023/12/06 23:03:14 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

   std::cout << &str << std::endl;
   std::cout << stringPTR << std::endl;
   std::cout << &stringREF << std::endl<< std::endl;

   std::cout << str << std::endl;
   std::cout << *stringPTR << std::endl;
   std::cout << stringREF << std::endl;
}