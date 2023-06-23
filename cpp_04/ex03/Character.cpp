/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:34:04 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 16:53:42 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &cpy) {
	copyInventory(cpy);
}

Character	&Character::operator=(const Character &cpy) {
	if (this != &cpy) {
		clearInventory();
		copyInventory(cpy);
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
		inventory[idx]->use(target);
}

void	Character::clearInventory() {
	for (int i = 0; i < 4; i++) {
		delete (inventory[i]);
		inventory[i] = NULL;
	}
}

void	Character::copyInventory(const Character &cpy) {
	if (this != &cpy) {
		for (int i = 0; i < 4; i++) {
			if (cpy.inventory[i] != NULL)
				inventory[i] = cpy.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
}

Character::~Character() {
	clearInventory();
}