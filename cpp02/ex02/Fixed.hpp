/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:30 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/26 19:30:03 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <math.h>

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

		bool operator>(const Fixed& comp) const;
		bool operator>=(const Fixed& comp) const;
		bool operator<(const Fixed& comp) const;
		bool operator<=(const Fixed& comp) const;
		bool operator==(const Fixed& comp) const;
		bool operator!=(const Fixed& comp) const;

		Fixed operator+(const Fixed& op) const;
		Fixed operator-(const Fixed& op) const;
		Fixed operator*(const Fixed& op) const;
		Fixed operator/(const Fixed& op) const;

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		static const Fixed& min(Fixed& a, Fixed& b);
   		static const Fixed& min(const Fixed& a, const Fixed& b);
	    static const Fixed& max(Fixed& a, Fixed& b);
	    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
