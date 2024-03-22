/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:47 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/22 17:22:14 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g > 150)
		throw GradeTooLowException();
	else if (g < 1)
		throw GradeTooHighException();
	else
		this->grade = g;
	std::cout << "Bureaucrat called "<< this->name << " created." << std::endl;
}

Bureaucrat::~Bureaucrat ()
{
	std::cout << "Bureaucrat called "<< this->name << " destroyed." << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}

Bureaucrat& Bureaucrat::operator++(int) {
	if (this->grade == 1)
		throw GradeTooHighException();
	else
	{
		std::cout << "Bureaucrat  "<< this->name << " grade incremented." << std::endl;
		this->grade --;
		return *this;
	}
}

Bureaucrat& Bureaucrat::operator--(int) {
	if (this->grade == 150)
		throw GradeTooLowException();
	else
	{
		std::cout << "Bureaucrat  "<< this->name << " grade decremented." << std::endl;
		this->grade ++;
		return *this;
	}
}

void	Bureaucrat::signForm(Form& f)
{
	if (this->grade > f.getSignGrade())
	{
		std::cout << this->name << " coudln't sign form " << f.getName() << " because ";
		throw GradeTooLowException();
	}
	else
	{
		std::cout << this->name << " signed form " << f.getName() << std::endl;
		f.beSigned(*this);
	}
}
