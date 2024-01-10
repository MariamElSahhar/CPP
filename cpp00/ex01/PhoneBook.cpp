/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:30:04 by melsahha          #+#    #+#             */
/*   Updated: 2023/09/10 21:22:42 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): numContacts (0) {}

void PhoneBook::addContact(const Contact& newContact) {
	std::cout << "New contact added" << std::endl;
	contacts[numContacts++] = newContact;
}

void PhoneBook::displayContacts() const{
	for (int i = 0; i < numContacts; i++)
		std::cout << contacts[i].getNickName() << std::endl;
}

void PhoneBook::searchContact() const{
	displayContacts();
}

