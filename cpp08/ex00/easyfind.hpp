/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 11:21:42 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/01 17:05:14 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind(const T& c, int n)
{
	typename T::const_iterator it;
	for (it = c.begin(); it != c.end(); it++)
	{
		if (*it == n)
			return (std::distance(c.begin(), it));
	}
	return (-1);
}

#endif
