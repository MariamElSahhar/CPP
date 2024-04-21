/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:14:39 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/21 15:58:52 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

#include "whatever.hpp"

class Awesome {
	public:
	Awesome(void) : _n(0){}
	Awesome(int n) : _n(n){}
	Awesome & operator=(Awesome & a) {_n=a._n; return *this;}
	bool operator==(Awesome const &rhs) const {return (this->_n==rhs._n);}
	bool operator!=(Awesome const &rhs) const {return (this->_n!=rhs._n);}
	bool operator>(Awesome const &rhs) const {return (this->_n>rhs._n);}
	bool operator<(Awesome const &rhs) const {return (this->_n<rhs._n);}
	bool operator<=(Awesome const &rhs) const {return (this->_n<=rhs._n);}
	bool operator>=(Awesome const &rhs) const {return (this->_n>=rhs._n);}
	int get_n() const {return _n;}
	private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) {o << a.get_n(); return o;}

int main( void ) {

	{
	std::cout << "----Complex Type----" << std::endl;
	Awesome a(2), b(4);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(a,b);
	std::cout << "swapped: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	{
	std::cout << "----Integers----" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swapped: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	{
	std::cout << "----Strings----" << std::endl;
	std::string a = "chaine1";
	std::string b = "chaine2";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "swapped: ca = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	{
	std::cout << "----Doubles----" << std::endl;
	double a = 2.1;
	double b = 2.2;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swapped: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	{
	std::cout << "----Floats----" << std::endl;
	float a = 2.1;
	float b = 2.2;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swapped: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	return 0;
}
