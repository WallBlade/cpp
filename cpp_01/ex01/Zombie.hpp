/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:57:47 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 17:03:48 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif