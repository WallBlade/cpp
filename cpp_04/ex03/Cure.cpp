/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:30:08 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 15:33:21 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure : Default constructor called" << std::endl; 
}

Cure	&Cure::operator=(Cure const &cpy) {
	this->_type = cpy._type;
	std::cout << "Cure : Assignement operator overload called" << std::endl;
	return (*this);
}

Cure::Cure(Cure const &cpy) : AMateria("cure") {
	*this = cpy;
	std::cout << "Cure : " << _type << " materia has been copied" << std::endl;
}

Cure	*Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter &target) {
	std::cout << "Cure : '* heals" << &target << "'s wounds *'" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure : Default destructor called" << std::endl;
}