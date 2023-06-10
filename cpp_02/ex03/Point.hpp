/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:58:18 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 20:20:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include "Fixed.hpp"

class Point {
	public:	/* --Constructors-- */
		Point();
		Point(float x_axis, float y_axis);
		Point(const Point &cpy);
		Point	operator=(const Point &cpy);
		~Point();
			/* --Member-functions-- */
		float	getX() const;
		float	getY() const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif