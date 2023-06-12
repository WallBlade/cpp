/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:13:15 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/11 18:42:42 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:	/* --Constructors-- */
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &cpy);
		DiamondTrap	&operator=(const DiamondTrap &cpy);
		~DiamondTrap();
			/* --Member-functions-- */
		void			whoAmI(void);
		virtual void	attack(const std::string &target);
	private:
		std::string	_name;
};

#endif