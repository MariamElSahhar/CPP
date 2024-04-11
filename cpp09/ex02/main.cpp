/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:35:33 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/11 14:38:04 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::string str = "";
		for (int i = 1; i < argc; i++)
		{
			str += argv[i];
			str += " ";
		}
		PmergeMe me(str);
	}
	return (0);
}
