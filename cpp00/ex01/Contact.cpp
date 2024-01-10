/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:42:06 by melsahha          #+#    #+#             */
/*   Updated: 2023/09/10 21:20:00 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const std::string& fn,  const std::string& ln, const std::string& nn, const std::string& secret, const std::string& num)
: firstName(fn), lastName(ln), nickName(nn), darkestSecret(secret), phoneNum(num)
{}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getSecret() const {
	return darkestSecret;
}

std::string Contact::getNum() const {
	return phoneNum;
}

std::string Contact::getNickName() const {
	return nickName;
}
