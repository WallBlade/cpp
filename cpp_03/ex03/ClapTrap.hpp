/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:43:28 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/11 18:45:08 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap {
	public:	/* --Constructors-- */
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &cpy);
		ClapTrap	&operator=(const ClapTrap &cpy);
		~ClapTrap();
			/* --Member-functions-- */
		virtual void	attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif