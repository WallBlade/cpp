/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:01:23 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/13 18:18:28 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
public:
	Array();
	Array(unsigned int n);
	Array(const Array& cpy);
	~Array();
	Array& operator=(const Array& cpy);
	T& operator[](unsigned int index);
	unsigned int size() const;

	class OutOfBoundsException : public std::exception {
	public:
		const char* what() const throw();
	};

private:
	T* elements;
	unsigned int _size;
};

template<typename T>
Array<T>::Array() : elements(0), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]), _size(n) {}

template<typename T>
Array<T>::Array(const Array& cpy) : elements(new T[cpy._size]), _size(cpy._size) {
	for (unsigned int i = 0; i < _size; i++) {
		elements[i] = cpy.elements[i];
	}
}

template<typename T>
Array<T>::~Array() {
	delete[] elements;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& cpy) {
	if (this != &cpy) {
		delete[] elements;
		_size = cpy._size;
		elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			elements[i] = cpy.elements[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size) {
		throw OutOfBoundsException();
	}
	return elements[index];
}

template<typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
	return "Out of bounds access";
}

#endif
