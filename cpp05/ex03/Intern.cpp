/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:53:40 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:39:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &i) {
	*this = i;
}

Intern& Intern::operator=(Intern const &i)
{
	(void)i;
	return *this;
}

Intern::~Intern() {}

Form*	makeRobotomyRequestForm(std::string target) {
	return new RobotomyRequestForm(target);
}

Form*	makePresidentialPardonForm(std::string target) {
	return new PresidentialPardonForm(target);
}

Form*	makeShrubberyCreationForm(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeForm(std::string form, std::string target)
{
	if (form.empty() || target.empty())
		return (0);

	std::string	forms[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	typedef Form *(*funcPtr)(std::string target);
	funcPtr makeForm[3] = {
		&makeRobotomyRequestForm,
		&makeShrubberyCreationForm,
		&makePresidentialPardonForm
	};

	for (int i = 0; i < 3; i ++)
	{
		if (form == forms[i])
		{
			std::cout << "Intern creates " << form << " Form." << std::endl;
			return (makeForm[i](target));
		}
	}
	std::cout << "Form information missing." << std::endl;
	return (0);
}
