/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:26:17 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 16:50:36 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &t) : Form("Robotomy Request", 72, 45), target(t) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : Form(f.getName(), f.getSignGrade(), f.getExecGrade()), target(f.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& f )
{
	(void)f;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &b)
{
	int success;

	if (!this->getSigned())
		throw FormUnsignedException();
	else if (b.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		srand(time(NULL));
		success = rand() % 2;
		std::cout << "* drilling noises *" << std::endl;
		if (success)
			std::cout << this->target << " successfully robotomized" << std::endl;
		else
			std::cout << this->target << " robotomy unsuccessful" << std::endl;
	}
}
