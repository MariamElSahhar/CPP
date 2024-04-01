/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:23:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:36:20 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try {
		std::cout << "\n--------------- Constructors ---------------" << std::endl;
		Bureaucrat bureaucrat("ash", 78);
		ShrubberyCreationForm form1("Shrubbery");
		RobotomyRequestForm form2("Robotomy");
		PresidentialPardonForm form3("President");
		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
		std::cout << "\n--------------- Destructors ---------------" << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
