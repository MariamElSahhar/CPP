/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:27:07 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 16:50:40 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &t) : Form("Presidential Pardon", 25, 5), target(t) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : Form(f.getName(), f.getSignGrade(), f.getExecGrade()), target(f.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	(void)f;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &b)
{
	if (!this->getSigned())
		throw FormUnsignedException();
	else if (b.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
