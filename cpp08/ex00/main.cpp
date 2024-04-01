/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:51:13 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 17:07:53 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int	main(void)
{
	std::cout << std::endl << "----- Vector -----" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	std::cout << ::easyfind(vec, 3) << std::endl;
	std::cout << ::easyfind(vec, 5) << std::endl;
	std::cout << ::easyfind(vec, 19) << std::endl;

	std::cout << std::endl << "----- List -----" << std::endl;
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	std::cout << ::easyfind(l, 3) << std::endl;
	std::cout << ::easyfind(l, 5) << std::endl;
	std::cout << ::easyfind(l, 19) << std::endl;

	std::cout << std::endl << "----- Deque -----" << std::endl;
	std::deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_back(4);
	dq.push_back(5);
	std::cout << ::easyfind(dq, 3) << std::endl;
	std::cout << ::easyfind(dq, 5) << std::endl;
	std::cout << ::easyfind(dq, 19) << std::endl;
}
