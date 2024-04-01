/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:24:23 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				is_signed;
		const int			sign_grade;
		const int			exec_grade;

	public:
		// BASICS
		Form (std::string n, int sg, int eg);
		virtual ~Form ();
		Form (Form const &f);

		// OPERATORS
		Form& operator=(Form const &a);

		// GETTERS
		bool				getSigned() const;
		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		// FUNCTIONS
		void	beSigned(const Bureaucrat& b);
		virtual void	execute(Bureaucrat const &b) = 0;

		// EXCEPTIONS
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

		class FormUnsignedException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return "Form is unsigned";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
