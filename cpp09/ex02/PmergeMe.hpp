/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:13:50 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/11 15:19:10 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>

class PmergeMe
{
private:
	// ATTRIBUTES
	std::string _inputStr;
	int _size;
	// List
	std::list<int> _list;
	double _listTimer;
	// Vector
	std::vector<int> _vector;
	double _vectorTimer;

	// METHODS
	// Utils
	bool validateInput();
	void initContainers();
	void printList(int flag);
	// List
	std::list<int> sortList(std::list<int> &l);
	std::list<int> mergeList(std::list<int> right,
							 std::list<int> left);
	// Vecotr
	std::vector<int> sortVector(std::vector<int> &v);
	std::vector<int> mergeVector(std::vector<int> right,
								 std::vector<int> left);

public:
	PmergeMe(std::string str);
	PmergeMe(PmergeMe const &b);
	~PmergeMe();
	PmergeMe &operator=(PmergeMe const &a);
};

#endif
