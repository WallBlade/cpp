/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:04:03 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 23:37:41 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
	public:	/*--Constructors--*/
		Dog();
		Dog(const Dog &cpy);
		Dog	&operator=(const Dog &cpy);
		virtual ~Dog();
			/*--Member-functions--*/
		virtual void	makeSound(void) const;
};

#endif