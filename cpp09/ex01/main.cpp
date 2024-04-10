/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:41:14 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/10 22:24:32 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
		RPN rpn(argv[1]);
	else if (argc != 1)
		std::cout << "Error" << std::endl;
	return (0);
}
