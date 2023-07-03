/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:11:53 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 14:27:34 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : _target(cpy._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	if (this != &cpy)
		this->_target = cpy._target;
	return *this;
}

void	PresidentialPardonForm::performAction() const {
	std::cout << "Presidential Pardon Form : " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "Presidential Pardon Form Default destructor called" << std::endl;
}