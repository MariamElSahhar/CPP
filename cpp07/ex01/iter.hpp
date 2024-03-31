/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:17:08 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/31 21:28:41 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T* arr, size_t len, void (*func)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif
