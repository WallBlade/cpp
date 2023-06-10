/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:55:50 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 20:33:02 by zel-kass         ###   ########.fr       */
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
		Fixed(const Fixed &cpy);
		Fixed	&operator=(const Fixed &cpy);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;
};

#endif