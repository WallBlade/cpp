/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:07:28 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/22 17:29:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {
	std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria : " << _type << " materia has been created" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &cpy) {
	this->_type = cpy._type;
	std::cout << "AMateria : Assignement operator overload called" << std::endl;
	return (*this);
}

AMateria::AMateria(AMateria const &cpy) {
	std::cout << "AMateria : " << _type << " materia has been copied" << std::endl;
	*this = cpy;
}

void	AMateria::use(ICharacter &target) {
	std::cout << "AMateria : Use function called" << std::endl;
}

std::string	const	&AMateria::getType() const {
	return (this->_type);
}

AMateria::~AMateria() {
	std::cout << "AMateria : Default destructor called" << std::endl;
}