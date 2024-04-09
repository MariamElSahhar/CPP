/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:57:46 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/09 16:22:51 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
/* 	std::ifstream dataFile("data.csv");
	std::ifstream inputFile(argv[1]); */
	try
	{
		if (argc == 2 && argv && argv[1])
		{
			BitcoinExchange btc("data.csv");
			btc.calcValue(argv[1]);
		}
		else if (argc == 1)
		{
			std::cout << "Error: Cannot open file" << std::endl;
		}
		else
			std::cout << "This program takes one argument only" << std::endl;
	}
	catch (const BitcoinExchange::CannotOpenDataFile& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const BitcoinExchange::CannotOpenInputFile& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const BitcoinExchange::DataFileException& e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
