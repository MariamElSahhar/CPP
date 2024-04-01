/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:09:17 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 18:31:46 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template < typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		// Constructurs / Desctructor
		MutantStack() {};
		MutantStack(MutantStack const &rhs) { *this = rhs; };
		~MutantStack() {};

		// Operator
		MutantStack& operator=(MutantStack const &rhs)
		{
			std::stack<T, Container>::operator=(rhs);
			return *this;
		};

		// Type
		typedef typename Container::iterator iterator;

		// Methods
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
};

#endif
