/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:13:10 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/13 00:16:01 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy) {
	this->_type = cpy._type;
}

void	Cat::makeSound(void) const {
	std::cout << "What does the cat say ?! Meeeoooooow (ﾐΦ ﻌ Φﾐ)ﾉ !" << std::endl;
}

Cat	&Cat::operator=(const Cat &cpy) {
	if (this == &cpy)
		return (*this);
	this->_type = cpy._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}
