/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:43:25 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/29 16:08:10 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string &target) :
		Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(*this) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy) {
	this->_target = cpy._target;
}

void	RobotomyRequestForm::performAction() const {
	std::cout << "Makes some drilling noises..." << std::endl;
    if (rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully 50% of the time." << std::endl;
    else
        std::cout << "Robotomy failed." << std::endl;
}
