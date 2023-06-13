/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:13:12 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/12 23:37:36 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {
	public:	/*--Constructors--*/
		Cat();
		Cat(const Cat &cpy);
		Cat	&operator=(const Cat &cpy);
		virtual ~Cat();
			/*--Member-functions--*/
		virtual void	makeSound(void) const;
};

#endif