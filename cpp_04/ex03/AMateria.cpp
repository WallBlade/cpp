/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:07:28 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 16:43:03 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {
	// std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	// std::cout << "AMateria : " << _type << " materia has been created" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &cpy) {
	this->_type = cpy._type;
	// std::cout << "AMateria : Assignement operator overload called" << std::endl;
	return (*this);
}

AMateria::AMateria(AMateria const &cpy) {
	// std::cout << "AMateria : " << _type << " materia has been copied" << std::endl;
	*this = cpy;
}

std::string	const	&AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
    (void)target;
}

AMateria::~AMateria() {
	// std::cout << "AMateria : Default destructor called" << std::endl;
}