/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:03:36 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 16:06:48 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string target;

	public:
		ShrubberyCreationForm( const std::string& t );
		ShrubberyCreationForm( const ShrubberyCreationForm& f );
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& f );

		void execute( const Bureaucrat& b ) const;
}

#endif
