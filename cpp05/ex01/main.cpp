/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:23:04 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/22 16:41:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b("Pano", 150);
	std::cout << b;
	b++;
	try {
		b--;
		b--;
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
