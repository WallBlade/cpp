/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:11:53 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/27 18:13:06 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() Form("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(this) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	this->_target = cpy._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}