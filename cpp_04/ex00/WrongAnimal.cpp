/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:46:52 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 23:52:54 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("wtf") {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal : " << _type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
	*this = cpy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &cpy) {
	this->_type = cpy._type;
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "What does the WrongAnimal say ?! No fckin clue... You ?" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}