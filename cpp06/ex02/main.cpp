/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:16:49 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/21 15:44:08 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <time.h>
// #include <thread>
// #include <chrono>

Base* generate(void)
{
	srand(time(NULL));
	int rand = std::rand() % 3;
	// std::this_thread::sleep_for(std::chrono::milliseconds(500));
	if (rand == 0)
		return (new A());
	else if (rand == 1)
		return (new B());
	else if (rand == 2)
		return (new C());
	else
		return (0);

}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown type" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void) a;
		return;
	}
	catch (const std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void) b;
		return;
	}
	catch (const std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void) c;
		return;
	}
	catch (const std::exception &e) {}
}


int	main(void)
{

	Base*	a = generate();
	Base*	b = generate();
	Base*	c = generate();
	Base*	d = generate();

	std::cout << "/* **************************************** */" << std::endl;

	std::cout << "a* = ";
	identify( a );
	std::cout << "a& = ";
	identify( *a ); std::cout << std::endl;

/* 	std::cout << "b* = ";
	identify( b );
	std::cout << "b& = ";
	identify( *b ); std::cout << std::endl;

	std::cout << "c* = ";
	identify( c );
	std::cout << "c& = ";
	identify( *c ); std::cout << std::endl;

	std::cout << "d* = ";
	identify( d );
	std::cout << "d& = ";
	identify( *d ); std::cout << std::endl; */

	std::cout << "/* ***************************************** */" << std::endl;


	delete a;
	delete b;
	delete c;
	delete d;

	return (0);
	}
