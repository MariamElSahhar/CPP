/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:29:55 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/31 22:17:02 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
	size_t _size;
	T *_arr;

public:
	// Constructors
	Array() : _size(0), _arr(nullptr) {};
	Array(unsigned int n) : _size(n)
	{
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = T();
	};
	Array(Array const &a) : _size(a.size())
	{
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_arr[i] = a._arr[i];
	};

	// Destructors
	~Array() { delete[] _arr; };

	// Operators
	Array &operator=(Array const &a)
	{
		if (this != &a)
		{
			delete[] _arr;
			_size = a.size();
			_arr = new T[_size];
			for (size_t i = 0; i < _size; i++) {
				_arr[i] = a._arr[i];
			}
		}
		return *this;
	};
	T &operator[](size_t i)
	{
		if (i >= _size)
			throw IndexOutOfBounds();
		return _arr[i];
	};

	// Size
	size_t size() const { return _size; };

	// Exception
	class IndexOutOfBounds : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Index out of bounds";
		}
	};
};

#endif
