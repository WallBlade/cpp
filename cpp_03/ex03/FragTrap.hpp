/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:49:49 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/11 18:42:29 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:	/* --Constructors-- */
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &cpy);
		FragTrap	&operator=(const FragTrap &cpy);
		~FragTrap();
			/* --Member-functions-- */
		virtual void	attack(const std::string &target);
		void			highFivesGuys(void);
};

#endif