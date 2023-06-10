/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:55:50 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 16:41:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <math.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0

class Fixed
{
	public:	/* --Constructors-- */
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &cpy);
		~Fixed();
		
			/* --Member-functions-- */
		int					toInt() const;
		float				toFloat() const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		static Fixed		&min(Fixed &ref, Fixed &other);
		static const Fixed	&min(const Fixed &ref, const Fixed &other);
		static Fixed		&max(Fixed &ref, Fixed &other);
		static Fixed const	&max(const Fixed &ref, const Fixed &other);

			/* --Overload-Operators-- */
		Fixed	&operator=(const Fixed &cpy);
		Fixed	operator+(const Fixed &cpy);
		Fixed	operator-(const Fixed &cpy);
		Fixed	operator*(const Fixed &cpy);
		Fixed	operator/(const Fixed &cpy);
		
		bool	operator>(const Fixed &cpy) const;
		bool	operator<(const Fixed &cpy) const;
		bool	operator>=(const Fixed &cpy) const;
		bool	operator<=(const Fixed &cpy) const;
		bool	operator==(const Fixed &cpy) const;
		bool	operator!=(const Fixed &cpy) const;
		
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
	private:
		int					_fixedPoint;
		static const int	_fractBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);

#endif