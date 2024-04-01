/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:22:59 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"
class Form;

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;

	public:
		// Constructors / Destructor
		Bureaucrat (std::string n, int g);
		Bureaucrat (Bureaucrat const &b);
		~Bureaucrat ();

		// Operators
		Bureaucrat& operator=(Bureaucrat const &a);

		// Getters
		const std::string getName() const;
		int	getGrade() const;

		// Methods
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form& f);
		void	executeForm(Form &f);

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return "Grade too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return "Grade too low";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
