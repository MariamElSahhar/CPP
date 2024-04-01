/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:13:24 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 17:46:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <list>

class Span
{
private:
	unsigned int _maxSize;
	std::list<int> _list;

public:
	// Constructors
	Span(unsigned int size);
	Span(Span const &b);
	~Span();

	// Operators
	Span &operator=(Span const &a);

	// Methods
	void addNumber(int n);
	void addNumber(std::list<int>::iterator start, std::list<int>::iterator finish);
	int shortestSpan();
	int longestSpan();
	void printList();

	// Exceptions
	class MaxSizeReached : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Span max size reached";
		};
	};
	class NoSpanPossible : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Span contains less than 2 elements";
		};
	};
};

#endif
