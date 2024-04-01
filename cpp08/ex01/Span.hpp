/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:13:24 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 11:12:15 by melsahha         ###   ########.fr       */
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

	// Functions
	void addNumber(int n);
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
