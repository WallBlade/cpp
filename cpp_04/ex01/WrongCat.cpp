/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:49:08 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/13 00:15:55 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) {
	*this = cpy;
}

void	WrongCat::makeSound(void) const {
	std::cout << "What does the Wrongcat say ?! Miaou miaou bitch !" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &cpy) {
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}
