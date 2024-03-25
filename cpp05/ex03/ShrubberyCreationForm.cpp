/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:06:58 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 16:50:24 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &t) : Form("Shrubbery Creation", 145, 137), target(t) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : Form(f.getName(), f.getSignGrade(), f.getExecGrade()), target(f.target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& f )
{
	(void)f;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b)
{
	if (!this->getSigned())
		throw FormUnsignedException();
	else if (b.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::ofstream file(this->target + "_shrubbery");
		file << "    *    " << std::endl;
		file << "   ***   " << std::endl;
		file << "  *****  " << std::endl;
		file << " ******* " << std::endl;
		file << "*********" << std::endl;
		file << "   |||   " << std::endl;
		file.close();
	}
}
