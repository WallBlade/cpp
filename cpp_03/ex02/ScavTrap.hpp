/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:50:19 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/11 16:30:19 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:	/* --Constructors-- */
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &cpy);
		ScavTrap	&operator=(const ScavTrap &cpy);
		~ScavTrap();
			/* --Member-functions-- */
		void	guardGate();
		void	attack(const std::string &target) override;
};

#endif
