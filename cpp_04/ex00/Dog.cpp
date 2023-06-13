/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:03:55 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 23:44:45 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy) {
	this->_type = cpy._type;
}

void	Dog::makeSound(void) const {
	std::cout << "What does the dog say ?! Wouf Wouf !" << std::endl;
}

Dog	&Dog::operator=(const Dog &cpy) {
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}