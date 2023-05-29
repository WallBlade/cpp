/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:57:47 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 14:07:05 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
	private:
		std::string	name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif