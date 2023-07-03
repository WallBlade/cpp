/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:43:25 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 14:27:38 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : _target(cpy._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy) {
	if (this != &cpy)
		this->_target = cpy._target;
	return *this;
}

void	RobotomyRequestForm::performAction() const {
	int	rand = std::rand();
	std::cout << "Makes some drilling noises..." << std::endl;
    if (rand % 2 == 0)
        std::cout << _target << " has been robotomized successfully !" << std::endl;
    else
        std::cout << "Robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "RobotomyRequestForm Default destructor called" << std::endl;
}
