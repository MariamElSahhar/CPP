/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:57:49 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/02 18:03:21 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>

class BitcoinExchange {
	private:
		std::map<std::string, double>* _data;
		std::map<std::string, double>* _input;

		std::pair<std::string, double> validateDataLine(std::string line);

	public:
		// Contructors / Destructot
		BitcoinExchange(std::map<std::string, double>* data, std::map<std::string, double>* input);
		BitcoinExchange(const BitcoinExchange &rhs);
		~BitcoinExchange();

		// Operators
		BitcoinExchange& operator=(const BitcoinExchange &rhs);

		// Methods
		static std::map<std::string, double>* getDataMap(std::string datafile);
		static std::map<std::string, double>* getInputMap(std::string inputfile);
};

#endif
