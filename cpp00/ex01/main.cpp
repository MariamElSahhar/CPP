/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:12:05 by melsahha          #+#    #+#             */
/*   Updated: 2023/09/10 21:20:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook phonebook;

	Contact mariam(
		"Mariam",
		"ElSahhar",
		"Kaboria",
		"I sleep all day",
		"12345"
	);
	phonebook.addContact(mariam);
	return (0);
}
