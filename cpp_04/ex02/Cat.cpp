/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:13:10 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/20 15:01:39 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->_dumb = new Brain();
	std::cout << "Cat : Default constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cpy) {
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	this->_dumb = new Brain(*cpy._dumb);
	return (*this);
}

Cat::Cat(const Cat &cpy) : Animal("Cat") {
	*this = cpy;
}

void	Cat::makeSound(void) const {
	std::cout << "What does the cat say ?! Meeeoooooow (ﾐΦ ﻌ Φﾐ)ﾉ !" << std::endl;
}

void	Cat::setBrainIdea(std::string idea, int index) {
	_dumb->setIdea(idea, index);
}

std::string	Cat::getBrainIdea(int index) {
	return (this->_dumb->getIdea(index));
}

Cat::~Cat() {
	delete (this->_dumb);
	std::cout << "Cat destructor called" << std::endl;
}
