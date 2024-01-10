/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:05:30 by melsahha          #+#    #+#             */
/*   Updated: 2024/01/04 14:22:13 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private:
		int					value;
		static const int	fract;
    public:
		Fixed();
		Fixed(Fixed &f);
		~Fixed();
		
		Fixed	operator=(Fixed const& f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
