/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:23:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/22 17:22:50 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat b("Pano", 200);
		Form f("go to school", 40, 3);
		std::cout << b;
		std::cout << f;
		b.signForm(f);
	}
	catch (const Bureaucrat::GradeTooHighException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << b;
	return 0;
}
