/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:47 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/25 17:43:48 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	this->grade = g;
	std::cout << "Bureaucrat called "<< this->name << " created." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b) : name(b.name), grade(b.grade)
{
	std::cout << "Bureaucrat called "<< this->name << " copied." << std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& b ) {
	std::cout << "Bureaucrat copy assignement constrcutor called." << std::endl;
	 if ( this != &b )
		grade = b.getGrade();
	 return *this;
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
