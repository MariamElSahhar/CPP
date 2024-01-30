/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:30:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/30 14:14:28 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): numContacts (0), nextSlot(0) {}

void PhoneBook::requestContact() {
	std::string fn, ln, nn, secret, num;

	std::cout	<< "First name:  ";
	std::getline(std::cin, fn);

	std::cout	<< "Last name:  ";
	std::getline(std::cin, ln);

	std::cout	<< "Nickname:  ";
	std::getline(std::cin, nn);

	std::cout	<< "Darkest secret:  ";
	std::getline(std::cin, secret);

	std::cout	<< "Phone number:  ";
	std::getline(std::cin, num);

	std::cout	<< std::endl;

	if (fn.empty() || ln.empty() || nn.empty() || secret.empty() || num.empty()
	|| allSpace(fn) || allSpace(ln) || allSpace(nn) || allSpace(secret)) {
		std::cout << "Invalid contact: empty fields" << std::endl << std::endl;
		return ;
	}
	else if (!allDigits(num)) {
		std::cout << "Invalid contact: phone number must be numeric" << std::endl << std::endl;
		return ;
	}
	else {
		Contact newContact(fn, ln, nn, secret, num);
		addContact(newContact);
	}
}

void PhoneBook::addContact(const Contact& newContact) {
	std::cout << "New contact added! ✅" << std::endl;
	contacts[nextSlot] = newContact;
	nextSlot = ++nextSlot % 8;
	numContacts = numContacts == 8 ? 8 : (numContacts + 1);
}

void PhoneBook::displayContacts() const {
	std::cout << "Total contacts: " << numContacts << std::endl;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < numContacts; i++)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		// First Name
		std::cout << std::right << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 10 - 1) + "." : contacts[i].getFirstName()) << "|";
		// Last Name
		std::cout << std::right << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 10 - 1) + "." : contacts[i].getLastName()) << "|";
		// Nickname
		std::cout << std::right << std::setw(10) << (contacts[i].getNickName().length() > 10 ? contacts[i].getNickName().substr(0, 10 - 1) + "." : contacts[i].getNickName()) << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::displayContact(int index) const {
	std::cout << "First name: " << contacts[index - 1].getFirstName() << std::endl;
	std::cout << "Last name: "  << contacts[index - 1].getLastName() << std::endl;
	std::cout << "Nickname: "  << contacts[index - 1].getNickName() << std::endl;
	std::cout << "Darkest secret: "  << contacts[index - 1].getSecret() << std::endl;
	std::cout << "Phone number: "  << contacts[index - 1].getNum() << std::endl;
	std::cout << std::endl;
}

bool PhoneBook::allDigits(std::string index) const {
	for (std::string::size_type i = 0; i < index.length(); ++i)
		if (!std::isdigit(index[i]))
			return false;
	return true;
}

bool	PhoneBook::allSpace(std::string str) const {
	unsigned long i = 0;
	while (std::isspace(str[i]))
		i++;
	return (i == str.length());
}


bool PhoneBook::searchContact() const {
	std::string index;
	displayContacts();
	if (numContacts == 0) {
		std::cout << "No contacts yet.." << std::endl;
		return (1);
	}
	std::cout << "Please enter the index of the contact" << std::endl;
	if (std::getline(std::cin, index) && allDigits(index)) {
		if (std::atoi(index.c_str()) > 0 && std::atoi(index.c_str()) <= numContacts) {
			std::cout << std::endl;
			displayContact(std::atoi(index.c_str()));
		}

		else
			std::cout << "Sorry, index out of range" << std::endl << std::endl;
	}
	else if (index == "EXIT") {
			return (0);
	}
	else {
		std::cout << "Sorry, invalid input" << std::endl << std::endl;
	}
	return (1);
}

