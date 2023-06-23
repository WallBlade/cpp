/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:50:34 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 16:50:38 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "Ice : Default constructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &cpy) {
	this->_type = cpy._type;
	// std::cout << "Ice : Assignement operator overload called" << std::endl;
	return (*this);
}

Ice::Ice(Ice const &cpy) : AMateria("ice") {
	*this = cpy;
	// std::cout << "Ice : " << _type << " materia has been copied" << std::endl;
}

Ice	*Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter &target) {
	std::cout << "Ice : '* shoot an ice bolt at " << target.getName() << std::endl;
}

Ice::~Ice() {
	// std::cout << "Ice : Default destructor called" << std::endl;
}