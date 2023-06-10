/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:55:47 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/08 19:29:08 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	// std::cout << "Int constructor called" << std::endl;
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
	// std::cout << "Float constructor called" << std::endl;
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
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed	&Fixed::operator=(const Fixed &cpy) {
	// std::cout << "Copy assignement operator called" << std::endl;
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

Fixed	Fixed::operator+(const Fixed &cpy) {
	if (this != &cpy)
		_fixedPoint += cpy._fixedPoint;
	return (*this);
}

Fixed	Fixed::operator-(const Fixed &cpy) {
	if (this != &cpy)
		_fixedPoint -= cpy._fixedPoint;
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &cpy) {
	return (this->toFloat() * cpy.toFloat());
}

Fixed	Fixed::operator/(const Fixed &cpy) {
	return (this->toFloat() / cpy.toFloat());
}

bool	Fixed::operator>(const Fixed &cpy) const {
	if (this != &cpy)
		if (_fixedPoint > cpy._fixedPoint)
			return (TRUE);
	return (FALSE);
}

bool	Fixed::operator<(const Fixed &cpy) const {
	if (this != &cpy)
		if (_fixedPoint < cpy._fixedPoint)
			return (TRUE);
	return (FALSE);
}

bool	Fixed::operator>=(const Fixed &cpy) const {
	if (this != &cpy)
		if (_fixedPoint >= cpy._fixedPoint)
			return (TRUE);
	return (FALSE);
}

bool	Fixed::operator<=(const Fixed &cpy) const {
	if (this != &cpy)
		if (_fixedPoint <= cpy._fixedPoint)
			return (TRUE);
	return (FALSE);
}

bool	Fixed::operator==(const Fixed &cpy) const {
	if (this != &cpy)
		if (_fixedPoint == cpy._fixedPoint)
			return (TRUE);
	return (FALSE);
}

bool	Fixed::operator!=(const Fixed &cpy) const {
	if (this != &cpy)
		if (_fixedPoint != cpy._fixedPoint) 
			return (TRUE);
	return (FALSE);
}

Fixed	Fixed::operator++(void) {
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	int	temp;

	Fixed	old = *this;
	temp = this->_fixedPoint;
	this->_fixedPoint++;
	return (old);
}

Fixed	Fixed::operator--(void) {
	this->_fixedPoint -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	int	temp;

	temp = this->_fixedPoint;
	this->_fixedPoint -= 1;
	Fixed	old(temp);
	return (old);
}


float	Fixed::toFloat() const {
	return static_cast<float>(_fixedPoint) / (1 << _fractBits);
}

int		Fixed::toInt() const {
	return (_fixedPoint >> _fractBits);
}

Fixed	&Fixed::min(Fixed &ref, Fixed &other) {
	if (ref._fixedPoint > other._fixedPoint)
		return (other);
	else
		return (ref);
}

const Fixed	&Fixed::min(const Fixed &ref, const Fixed &other) {
	if (ref._fixedPoint > other._fixedPoint)
		return (other);
	else
		return (ref);
}

Fixed	&Fixed::max(Fixed &ref, Fixed &other) {
	if (ref._fixedPoint < other._fixedPoint)
		return (other);
	else
		return (ref);
}

const Fixed	&Fixed::max(const Fixed &ref, const Fixed &other) {
	if (ref._fixedPoint < other._fixedPoint)
		return (other);
	else
		return (ref);
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}