/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:00:30 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/19 16:15:07 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>

class Brain {
	public:	/*--Constructors--*/
		Brain();
		Brain(const Brain &cpy);
		Brain	&operator=(const Brain &cpy);
		~Brain();
			/*--Member-functions--*/
		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index);
	private:
		std::string	_ideas[100];
};

#endif