/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:01:31 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 14:27:42 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : _target(cpy._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy) {
	if (this != &cpy)
		this->_target = cpy._target;
	return *this;
}

void	ShrubberyCreationForm::performAction() const {
	std::string		filename = _target + "_shrubbery";
	std::ofstream	outfile(filename.c_str());

	if (outfile) {
		outfile << "    *" << "\n";
		outfile << "   ***" << "\n";
		outfile << "  *****" << "\n";
		outfile << " *******" << "\n";
		outfile << "****|****" << std::endl;
		outfile.close();
	}
	else {
		std::cout << "Failed to create the file : " << filename << std::endl;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "ShrubberyCreationForm Default destructor called" << std::endl;
}