/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:03:55 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/20 15:02:10 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->_dumb = new Brain();
	std::cout << "Dog : Default constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &cpy) {
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	this->_dumb = new Brain(*cpy._dumb);
	std::cout << "Assignement overload operator called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &cpy) : Animal("Dog") {
	*this = cpy;
}

void	Dog::makeSound(void) const {
	std::cout << "What does the dog say ?! Wouf Wouf !" << std::endl;
}

void	Dog::setBrainIdea(std::string idea, int index) {
	this->_dumb->setIdea(idea, index);
}

std::string	Dog::getBrainIdea(int index) {
	return (this->_dumb->getIdea(index));
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_dumb);
}