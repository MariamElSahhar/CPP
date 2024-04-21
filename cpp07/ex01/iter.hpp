/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:17:08 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/21 16:06:20 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T* arr, size_t len, void (*func)(const T&))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif
