/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:57:46 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/02 17:47:16 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(void)
{
	std::ifstream dataFile("data.csv");

	if (!dataFile.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	else
	{
		BitcoinExchange b(dataFile, dataFile);

	}
	return (0);
}
