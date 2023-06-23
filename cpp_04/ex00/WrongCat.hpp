/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:48:58 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 16:58:22 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:	/*--Constructors--*/
		WrongCat();
		WrongCat(const WrongCat &cpy);
		WrongCat	&operator=(const WrongCat &cpy);
		~WrongCat();
			/*--Member-functions--*/
		void	makeSound(void) const;
};

#endif