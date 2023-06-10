/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:55:47 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/07 16:52:34 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	if (num > (INT_MAX >> _fractBits)) {
		std::cerr << "Error\nInput overflows" << std::endl;
		_fixedPoint = INT_MAX;
	}
	else if (num < (INT_MIN >> _fractBits)) {
		std::cerr << "Error\nInput underflows" << std::endl;
		_fixedPoint = INT_MIN;
	}
	else
		_fixedPoint = static_cast<int>(roundf(num * (1 << _fractBits)));
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	if (num > (INT_MAX / (1 << _fractBits))) {
		std::cerr << "Error\nInput overflows" << std::endl;
		_fixedPoint = INT_MAX;
	}
	else if (num < (INT_MIN / (1 << _fractBits))) {
		std::cerr << "Error\nInput underflows" << std::endl;
		_fixedPoint = INT_MIN;
	}
	else
		_fixedPoint = static_cast<int>(roundf(num * (1 << _fractBits)));
}

Fixed::Fixed(const Fixed &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed	&Fixed::operator=(const Fixed &cpy) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedPoint = cpy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << static_cast<float>(fixed.getRawBits() / 256.0f);
	return (out);
}

float	Fixed::toFloat() const {
	return static_cast<float>(_fixedPoint) / (1 << _fractBits);
}

int		Fixed::toInt() const {
	return (_fixedPoint >> _fractBits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}