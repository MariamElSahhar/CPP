/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:47 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/22 16:15:20 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form(std::string n, int sg, int eg) : name(n), is_signed(false)
{
	if (sg < 1 || eg < 1)
		throw GradeTooHighException();
	else if (sg > 150 || eg > 150)
		throw GradeTooLowException();
	else
	{
		this->exec_grade = eg;
		this->sign_grade = sg;
		std::cout << "Form called "<< this->name << " created." << std::endl;
	}
}

Form::Form (Form const &f) : name(f.name), is_signed(false), exec_grade(f.exec_grade), sign_grade(f.sign_grade) {}


Form::~Form () {}

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->is_signed);
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecGrade() const
{
	return (this->exec_grade);
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.getName() << ", Form signature grade " << f.getSignGrade() << ", execution grade " << f.getExecGrade() << " is ";
	if (f.getSigned())
		os << "signed.\n";
	else
		os << "unsigned.\n";
	return (os);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->sign_grade)
		throw GradeTooLowException();
	else
		this->is_signed = true;
}
