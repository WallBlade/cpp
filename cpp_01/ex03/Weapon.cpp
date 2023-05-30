/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:29:47 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 12:45:05 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type) {
	// std::cout << "Weapon Constructor called" << std::endl;
};
Weapon::~Weapon() {
	// std::cout << "Weapon Destructor called" << std::endl;
};

const std::string	&Weapon::getType() const{
	const std::string	&typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}