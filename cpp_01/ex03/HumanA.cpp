/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:50:33 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 12:44:54 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &danger) : _name(name), _danger(danger) {
	// std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA() {
	// std::cout << "HumanA Destructor called" << std::endl;
}

void	HumanA::attack() const {
	std::cout << _name << ": attacks with their " << _danger.getType() << std::endl;
}