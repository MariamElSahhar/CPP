/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:25:02 by melsahha          #+#    #+#             */
/*   Updated: 2023/10/22 17:34:54 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string phoneNum;
	public:
		Contact();
		Contact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& secret, const std::string& num);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getSecret() const;
		std::string getNum() const;
};

#endif
