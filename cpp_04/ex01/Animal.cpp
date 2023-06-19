/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:50:03 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/19 17:40:22 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default") {
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal : " << _type << " has been created" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	this->_type = cpy._type;
}

Animal	&Animal::operator=(const Animal &cpy) {
	this->_type = cpy._type;
	return (*this);
}

std::string	Animal::getType() const {
	return (this->_type);
}

void	Animal::makeSound(void) const {
	std::cout << "What does the Animal say ?! No fckin clue... You ?" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}