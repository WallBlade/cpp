/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:00:32 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/19 17:33:27 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain : Default constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &cpy) {
	if (this == &cpy)
		return (*this);
	for (int i = 0; i < 100; i++)
		_ideas[i] = cpy._ideas[i];
	return (*this);
}

Brain::Brain(const Brain &cpy) {
	if (this == &cpy)
		return ;
	*this = cpy;
}

void	Brain::setIdea(std::string idea, int index) {
	this->_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) {
	return (this->_ideas[index]);
}

Brain::~Brain() {
	std::cout << "Brain : Default destructor called" << std::endl;
}