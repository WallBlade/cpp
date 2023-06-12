/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:47:45 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 22:39:16 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "ClapTrap : " << _name << "Default FragTrap created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap : " << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {
	_name = cpy._name;
	_hitPoints = cpy._hitPoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " has no longer the capacity to attack !" << std::endl;
		return ;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount <= _hitPoints)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " has been struck, " << amount << " damage taken" << std::endl;
	std::cout << _hitPoints << " points left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points" << std::endl;
		std::cout << _hitPoints << " points left" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " has no longer the capacity to repair" << std::endl;
		return ;
	}
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " has been destroyed" << std::endl;
}