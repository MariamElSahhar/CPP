/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/22 17:01:27 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
class Form;

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat (std::string n, int g);
		~Bureaucrat ();
		Bureaucrat (Bureaucrat const &a);

		Bureaucrat& operator=(Bureaucrat const &a);
		Bureaucrat& operator++(int);
		Bureaucrat& operator--(int);

		const std::string getName() const;
		int	getGrade() const;

		void	signForm(const Form& f);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return "Grade over 1";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return "Grade under 150";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
