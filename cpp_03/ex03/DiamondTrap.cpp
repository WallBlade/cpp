/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:13:13 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 22:30:28 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), _name(ClapTrap::_name + "_clap_name") {
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap : " << _name << " has been created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(ClapTrap::_name + "_clap_name") {
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap : " << _name << " has been created" << std::endl;
	std::cout << "Stats: \n_name: " << _name << "\n_hitPoints: "
		<< _hitPoints << "\n_energyPoints: " << _energyPoints << "\n_attackDamage: " << _attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	std::cout << "DiamondTrap : " << this->_name << " copy has been created" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &cpy) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	
	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Hello ! My DiamondTrap name is: " << this->_name;
	std::cout << "\nAnd my ClapTrap name is: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ClapTrap::attack(target);
	return ;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}