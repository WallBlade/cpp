/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:52:16 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 13:23:57 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
	public:
		HumanB(const std::string name);
		~HumanB();
		void	attack(void) const;
		void	setWeapon(Weapon &danger);
	private:
		Weapon		*_danger;
		std::string	_name;
};

#endif