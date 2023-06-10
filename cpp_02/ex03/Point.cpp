/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:58:15 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 20:26:01 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _y(0), _x(0) {
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point& cpy) : _x(cpy._x), _y(cpy._y) {}

Point::Point(float x_axis, float y_axis) : _x(Fixed(x_axis)), _y(Fixed(y_axis)) {
	// std::cout << "Init constructor called" << std::endl;
}

Point	Point::operator=(const Point &cpy) {
	Point	ret(cpy._x.toFloat(), cpy._y.toFloat());

	return ret;
}

float	Point::getX() const {
	return (_x.toFloat());
}

float	Point::getY() const {
	return (_y.toFloat());
}

Point::~Point() {}