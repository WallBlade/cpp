/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:50:20 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 22:39:36 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap : " << _name << "Default FragTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	std::cout << "ScavTrap : " <<  this->_name << " copy has been created" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	
	return (*this);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap : " <<  this->_name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << _name << " has no longer the capacity to attack !" << std::endl;
		return ;
	}
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}