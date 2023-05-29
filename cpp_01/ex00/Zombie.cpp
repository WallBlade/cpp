/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:57:43 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 14:04:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " destroyed." << std::endl;
}

void	Zombie::announce() {
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
