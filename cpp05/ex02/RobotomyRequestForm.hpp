/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:03:36 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 16:06:27 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string target;

	public:
		RobotomyRequestForm( const std::string& t );
		RobotomyRequestForm( const RobotomyRequestForm& f );
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=( const RobotomyRequestForm& f );

		void execute( const Bureaucrat& b ) const;
}

#endif
