/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:47:12 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/20 15:22:32 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal {
	public:	/*--Constructors--*/
		Animal();
		Animal(const std::string type);
		Animal(const Animal &cpy);
		Animal	&operator=(const Animal &cpy);
		virtual ~Animal();
			/*--Member-functions--*/
		std::string		getType() const;
		virtual void	makeSound(void) const;
	protected:
		std::string	_type;
};

#endif