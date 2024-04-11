/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:14:16 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/11 15:23:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::string str) : _inputStr(str)
{
	if (!validateInput())
	{
		std::cout << "Error" << std::endl;
		return;
	}
	initContainers();
	// Print unsorted list
	printList(0);
	// Sort List
	clock_t start = clock();
	_list = sortList(_list);
	clock_t end = clock();
	_listTimer = (double)(end - start) / CLOCKS_PER_SEC;
	// Sort Vector
	start = clock();
	_vector = sortVector(_vector);
	end = clock();
	_vectorTimer = (double)(end - start) / CLOCKS_PER_SEC;
	// Print sorted list
	printList(1);
	// Print times
	std::cout << "Time to process a range of " << _size << " elements using std::list : " << _listTimer << "us" << std::endl;
	std::cout << "Time to process a range of " << _size << " elements using std::vector : " << _vectorTimer << "us" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const &b)
{
	(void)b;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &b)
{
	if (this != &b)
	{
		this->_inputStr = b._inputStr;
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
}

bool PmergeMe::validateInput()
{
	for (size_t i = 0; i < _inputStr.length(); i++)
	{
		if (!std::isdigit(_inputStr[i]) && _inputStr[i] != ' ')
			return (false);
	}
	return (true);
}

void PmergeMe::initContainers()
{
	size_t i = 0, j;
	int num;

	while (i < _inputStr.length())
	{
		if (std::isdigit(_inputStr[i]))
		{
			j = i;
			while (i < _inputStr.length() && std::isdigit(_inputStr[i]))
				i++;
			num = std::stoi(_inputStr.substr(j, i - j));
			_list.push_back(num);
			_vector.push_back(num);
		}
		else
			i++;
	}
	_size = _list.size();
}

void PmergeMe::printList(int flag)
{
	if (!flag)
		std::cout << "Before : ";
	else
		std::cout << "After : ";
	for (std::list<int>::iterator it = _list.begin();
		 it != _list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

std::list<int> PmergeMe::sortList(std::list<int> &l)
{
	if (l.size() <= 1)
		return (l);

	// Split list into left and right
	std::list<int> right, left;
	int mid = l.size() / 2;
	std::list<int>::iterator it = l.begin();
	for (int i = 0; i < mid; i++)
	{
		left.push_back(*it);
		it++;
	}
	while (it != l.end())
	{
		right.push_back(*it);
		it++;
	}

	// Recursion
	left = sortList(left);
	right = sortList(right);

	// Return merged
	return (mergeList(right, left));
}

std::list<int> PmergeMe::mergeList(std::list<int> right, std::list<int> left)
{
	std::list<int> merged;
	while (!right.empty() && !left.empty())
	{
		if (left.front() < right.front())
		{
			merged.push_back(left.front());
			left.pop_front();
		}
		else
		{
			merged.push_back(right.front());
			right.pop_front();
		}
	}

	merged.splice(merged.end(), left);
	merged.splice(merged.end(), right);
	return (merged);
}

std::vector<int> PmergeMe::sortVector(std::vector<int> &v)
{
	if (v.size() <= 1)
		return (v);

	// Split list into left and right
	std::vector<int> right, left;
	int mid = v.size() / 2;
	std::vector<int>::iterator it = v.begin();
	for (int i = 0; i < mid; i++)
	{
		left.push_back(*it);
		it++;
	}
	while (it != v.end())
	{
		right.push_back(*it);
		it++;
	}

	// Recursion
	left = sortVector(left);
	right = sortVector(right);

	// Return merged
	return (mergeVector(right, left));
}

std::vector<int> PmergeMe::mergeVector(std::vector<int> right, std::vector<int> left)
{
	std::vector<int> merged;
	std::vector<int>::iterator it_r = right.begin(), it_l = left.begin();
	while (it_r != right.end() && it_l != left.end())
	{
		if (*it_l < *it_r)
		{
			merged.push_back(*it_l);
			it_l++;
		}
		else
		{
			merged.push_back(*it_r);
			it_r++;
		}
	}

	merged.insert(merged.end(), it_l, left.end());
	merged.insert(merged.end(), it_r, right.end());
	return (merged);
}
