/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:11:53 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/29 16:08:14 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string &target) :
		Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(*this) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	this->_target = cpy._target;
}

void	PresidentialPardonForm::performAction() const {
	std::cout << "Presidential Pardon Form : " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}