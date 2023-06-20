/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:13:12 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/20 15:26:15 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:	/*--Constructors--*/
		Cat();
		Cat(const Cat &cpy);
		Cat	&operator=(const Cat &cpy);
		~Cat();
			/*--Member-functions--*/
		virtual void	makeSound(void) const;
		void			setBrainIdea(std::string idea, int index);
		std::string		getBrainIdea(int index);
	private:
		Brain	*_dumb;
};

#endif