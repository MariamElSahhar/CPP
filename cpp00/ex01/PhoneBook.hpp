/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:16:59 by melsahha          #+#    #+#             */
/*   Updated: 2023/09/10 21:21:11 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		numContacts;
		void	displayContacts() const;
	public:
		PhoneBook();
		void	addContact(const Contact& newContact);
		void	searchContact() const;
};

#endif
