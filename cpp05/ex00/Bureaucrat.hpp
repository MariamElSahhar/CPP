/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:22:44 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/22 14:28:06 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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
		const int	getGrade() const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
