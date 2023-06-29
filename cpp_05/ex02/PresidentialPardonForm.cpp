/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:11:53 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/28 13:55:20 by zel-kass         ###   ########.fr       */
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

void	PresidentialPardonForm::execute(Bureaucrat const &executor) {
	if (executor.getGrade() <= getExecGrade() && this->isSigned())
		std::cout << "Presidential Pardon Form : " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm() {}