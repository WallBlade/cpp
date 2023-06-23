/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:34:06 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 14:10:15 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(const std::string &name);
		Character(const Character &cpy);
		~Character();
		
		Character	&operator=(const Character &cpy);

		std::string const	&getName() const ;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
	private:
		std::string	_name;
		AMateria	*inventory[4];

		void	clearInventory();
		void	copyInventory(const Character &cpy);
};

#endif