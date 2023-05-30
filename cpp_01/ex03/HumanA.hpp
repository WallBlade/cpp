/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:50:30 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 12:49:18 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(const std::string &name, Weapon &dangerous);
		~HumanA();
		void	attack(void) const;
	private:
		Weapon&		_danger;
		std::string	_name;
};

#endif