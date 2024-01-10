/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:50:18 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/10 20:55:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN"; //variable
    std::string* stringPTR = &str; //pointer holds the memory address of a variable
    std::string& stringREF = str; //reference acts as an alias to the variable

   std::cout << &str << std::endl; //address of the variable
   std::cout << stringPTR << std::endl; //address of the variable
   std::cout << &stringREF << std::endl<< std::endl; //address of the variable

   std::cout << str << std::endl; //variable value
   std::cout << *stringPTR << std::endl; //variable value (requires dereferencing operator *)
   std::cout << stringREF << std::endl; //variable value, accessed directly through the ref
}