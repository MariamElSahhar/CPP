/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:53:54 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:37:36 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		// Constructors / Destructor
		Intern();
		Intern(Intern const &i);
		~Intern();

		// Operator
		Intern& operator=(Intern const &i);

		// Method
		Form *makeForm(std::string form, std::string target);
};

#endif
