/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:14:25 by melsahha          #+#    #+#             */
/*   Updated: 2024/03/31 16:15:23 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_MIN_MAX_H
#define SWAP_MIN_MAX_H

template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(const T& a, const T& b) {
	return (b < a) ? b : a;
}

template<typename T>
T max(const T& a, const T& b) {
	return (a < b) ? b : a;
}

#endif
