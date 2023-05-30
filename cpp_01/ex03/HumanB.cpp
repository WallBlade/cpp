/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:28:22 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 13:27:11 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _danger(NULL), _name(name) {
	// std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB() {
	// std::cout << "HumanB Destructor called" << std::endl;
}

void	HumanB::attack() const {
	if (_danger != nullptr)
		std::cout << _name << " : attacks with their " << _danger->getType() << std::endl;
	else
		std::cout << _name << " : has no weapon to attack with !" << std::endl;
}

void	HumanB::setWeapon(Weapon &danger) {
	this->_danger = &danger;
}