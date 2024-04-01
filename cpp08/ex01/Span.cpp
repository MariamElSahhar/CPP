/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:20:36 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 17:49:39 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : _maxSize(size)
{
	std::cout << "Span constructor called." << std::endl;
}

Span::Span(Span const &s) : _maxSize(s._maxSize), _list(s._list)
{
	std::cout << "Span copy constructor called." << std::endl;
}

Span &Span::operator=(Span const &s)
{
	std::cout << "Span copy assignement constructor called." << std::endl;
	if (this != &s)
	{
		this->_maxSize = s._maxSize;
		this->_list.clear();
		std::list<int>::const_iterator it;
		for (it = s._list.begin(); it != s._list.end(); ++it)
			this->addNumber(*it);
	}
	return *this;
}

Span::~Span()
{
	std::cout << "Span destructor called." << std::endl;
}

void Span::addNumber(int n)
{
	if (_list.size() == _maxSize)
		throw MaxSizeReached();
	_list.push_back(n);
}

void Span::addNumber(std::list<int>::iterator start, std::list<int>::iterator finish)
{
	if (std::distance(start, finish) + _list.size() > _maxSize)
		throw MaxSizeReached();
	for (; start != finish; start++)
		addNumber(*start);
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw NoSpanPossible();
	int max = *std::max_element(_list.begin(), _list.end());
	int min = *std::min_element(_list.begin(), _list.end());
	return (max - min);
}

int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw NoSpanPossible();
	std::list<int> sorted = _list;
	sorted.sort();
	std::list<int>::iterator second = std::next(sorted.begin());
	int min_span = *second - *sorted.begin();
	for (++second; second != sorted.end(); second++)
	{
		if (*second - *std::prev(second) < min_span)
			min_span = *second - *std::prev(second);
	}
	return (min_span);
}

void Span::printList()
{
	std::cout << "List: ";
	std::list<int>::const_iterator it;
	for (it = _list.begin(); it != _list.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}
