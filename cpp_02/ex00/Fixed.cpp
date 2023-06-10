/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 01:55:47 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 20:33:58 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}