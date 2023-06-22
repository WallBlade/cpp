/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:50:31 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/22 17:51:09 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const &cpy);
		Ice	&operator=(Ice const &cpy);
		~Ice();
		Ice	*clone() const;
		void	use(ICharacter &target);
};

#endif