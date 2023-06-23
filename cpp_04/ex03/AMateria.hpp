/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:07:24 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 15:32:49 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &cpy);
		AMateria	&operator=(AMateria const &cpy);
		virtual	~AMateria() = 0;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		std::string const &getType() const;
	protected:
		std::string	_type;
};

#endif