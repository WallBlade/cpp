/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:49:50 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 22:39:09 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap : " << _name << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	if (!this->_energyPoints)
		this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : " << this->_name << " has been created" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	
	return (*this);
}

FragTrap::FragTrap(const FragTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	std::cout << "FragTrap : " << this->_name << " copy has been created" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name << " has no longer the capacity to attack !" << std::endl;
		return ;
	}
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "*Positive High Five*" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}