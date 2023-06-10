/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:55:50 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/07 16:42:16 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <math.h>
#include <limits.h>

class Fixed
{
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &cpy);
		~Fixed();
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &cpy);
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif