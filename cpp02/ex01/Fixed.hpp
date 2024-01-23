/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:30 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/23 16:02:53 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private:
		int					_value;
		static const int	_fractionalBits = 8;
    public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &f);
		~Fixed();
		
		Fixed	operator=(Fixed const& f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt(void ) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
