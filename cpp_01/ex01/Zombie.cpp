/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:57:43 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 17:04:06 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " destroyed." << std::endl;
}

void	Zombie::announce() {
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}
