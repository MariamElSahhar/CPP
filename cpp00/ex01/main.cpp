/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:12:05 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/27 19:49:49 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void displayPrompts() {
	std::cout << "📲 To add a contact enter ADD" << std::endl;
	std::cout << "🔍 To search a contact enter SEARCH " << std::endl;
	std::cout << "❌ To exit enter EXIT" << std::endl  << std::endl;
}

int	main()
{
	PhoneBook phonebook;
	std::string input;

	std::cout << "☎️ Welcome to your phonebook ☎️" << std::endl;

	while (1) {
		displayPrompts();
		if (std::getline(std::cin, input)) {
			if (input == "EXIT")
				return (0);
			if (input == "ADD")
				phonebook.requestContact();
			else if (input == "SEARCH") {
				if (!phonebook.searchContact())
					return (0);
			}
			else {
				std::cout << "Sorry, please try again" << std::endl;
			}
		} else if (std::cin.eof())
			break;
		else {
			std::cout << "Sorry, invalid input" << std::endl;
			std::cin.clear();
		}
	}
	return (0);
}
