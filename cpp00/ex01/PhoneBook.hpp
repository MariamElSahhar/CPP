/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:16:59 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 17:16:16 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		numContacts;
		int		nextSlot;
		void	addContact(const Contact& newContact);
		void	displayContacts() const;
		bool	allDigits(std::string index) const;
		void	displayContact(int index) const;
	public:
		PhoneBook();
		void	requestContact();
		bool	searchContact() const;
};

#endif
