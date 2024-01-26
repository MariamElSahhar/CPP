/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:30 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 19:29:49 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private:
		int					value;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(Fixed &f);
		~Fixed();
		Fixed	operator=(Fixed const& f);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
