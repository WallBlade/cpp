/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:23:45 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/19 17:05:07 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0), _count(0) {}

Span::Span(unsigned int max) : _max(max), _count(0) {
	_tab = new int[_max];
}

Span::Span(const Span &cpy) : _max(cpy._max), _count(0) {}

Span	&Span::operator=(const Span &cpy) {
	this->_max = cpy._max;
	return *this;
}

void	Span::addNumber(unsigned int value) {
	if (_count >= _max) {
		throw OutOfBoundsException();
	} else {
		_tab[_count] = value;
		_count++;
	}
}

int		Span::shortestSpan() {
	if (_count < 2)
		throw TooFewValuesException();
	int *tmpArray = new int[_count];
	std::copy(_tab, _tab + _count, tmpArray);
	std::sort(tmpArray, tmpArray + _count);
	int minSpan = tmpArray[1] - tmpArray[0];
	for (unsigned int i = 2; i < _count; i++) {
		int span = tmpArray[i] - tmpArray[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	delete[] tmpArray;
	return (minSpan);
}

int		Span::longestSpan() {
	if (_count < 2)
		throw TooFewValuesException();
	int *tmpArray = new int[_count];
	std::copy(_tab, _tab + _count, tmpArray);
	std::sort(tmpArray, tmpArray + _count);
	int ret = tmpArray[_count - 1] - tmpArray[0];
	delete[] tmpArray;
	return (ret);
}

void	Span::addRange(int start, int end) {
	while (start != end) {
		addNumber(start);
		start++;
	}
}

const char*	Span::OutOfBoundsException::what() const throw() {
	return "Span is full";
}

const char*	Span::TooFewValuesException::what() const throw() {
	return "Too few values in Span";
}

Span::~Span() {
	delete[] _tab;
}