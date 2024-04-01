/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:26:36 by melsahha         ###   ########.fr       */
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
		const int			exec_grade;
		const int			sign_grade;

	public:
		// Constuctors / Destructor
		Form (std::string n, int sg, int eg);
		Form (Form const &a);
		~Form ();

		// Operators
		Form& operator=(Form const &a);

		// Getters
		bool				getSigned() const;
		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		// Methods
		void	beSigned(const Bureaucrat& b);

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

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
