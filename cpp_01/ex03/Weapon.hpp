/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:29:45 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 12:25:53 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {
	public:
		Weapon(const std::string type);
		~Weapon();
		const std::string	&getType() const;
		void				setType(std::string type);
	private:
		std::string			_type;
};

#endif