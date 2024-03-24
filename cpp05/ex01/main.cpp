/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:23:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/24 14:13:52 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat b("Pano", 130);
		Form f("go to school", 40, 3);
		std::cout << b;
		std::cout << f;
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
