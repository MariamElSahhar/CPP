/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:23:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:29:48 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat b("Pano", 30);
		Form f("go to school", 70, 3);
		std::cout << b << std::endl;
		std::cout << f << std::endl;
		b.signForm(f);
		f.beSigned(b);
	}
	catch (const Bureaucrat::GradeTooHighException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
