/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:57:49 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/09 17:44:50 by melsahha         ###   ########.fr       */
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
		// ATTRIBUTES
		std::string _dataFile;
		std::map<std::string, double> _data;

		// METHODS
		void getDataMap(std::ifstream& datafile);
		bool validDate(std::string date);
		bool validValue(std::string val);
		double findRate(std::string date);
		bool dateLessThan(std::string lhs, std::string rhs);
	public:
		// Contructors / Destructor
		BitcoinExchange(std::string dataFile);
		BitcoinExchange(const BitcoinExchange &rhs);
		~BitcoinExchange();

		// Operators
		BitcoinExchange& operator=(const BitcoinExchange &rhs);

		// Methods
		void calcValue(std::string inputFile);

		// Exceptions
		class CannotOpenDataFile : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Cannot open data file";
				}
		};
		class CannotOpenInputFile : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Cannot open input file";
				}
		};
		class DataFileException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Incorrect data file format";
				}
		};
		class InputFileException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Incorrect input file format";
				}
		};
};

#endif
