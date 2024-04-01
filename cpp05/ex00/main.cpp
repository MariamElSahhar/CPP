/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:23:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 16:18:26 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b("Pano", 1);
	std::cout << b;
	try {
		b.decrementGrade();
		b.incrementGrade();
		b.incrementGrade();
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
