/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:03:36 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 16:49:12 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string target;

	public:
		PresidentialPardonForm( const std::string& t );
		PresidentialPardonForm( const PresidentialPardonForm& f );
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=( const PresidentialPardonForm& f );

		void execute(Bureaucrat const &b);
};

#endif
