/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:25:02 by melsahha          #+#    #+#             */
/*   Updated: 2023/09/10 21:21:30 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string darkestSecret;
		std::string phoneNum;
	public:
		Contact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& secret, const std::string& num);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getSecret() const;
		std::string getNum() const;
};

#endif
