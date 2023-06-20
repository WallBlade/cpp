/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:45:25 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/20 14:59:42 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal {
	public:	/*--Constructors--*/
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal	&operator=(const WrongAnimal &cpy);
		virtual ~WrongAnimal();
			/*--Member-functions--*/
		std::string		getType() const;
		void			makeSound(void) const;
	protected:
		std::string	_type;
};

#endif