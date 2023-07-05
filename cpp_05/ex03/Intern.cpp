/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:48:26 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/05 18:06:09 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(const Intern &cpy) {
	(void)cpy;
}

Intern	&Intern::operator=(const Intern &cpy) {
	(void)cpy;
	return *this;
}

Form	*Intern::makeForm(const std::string name, const std::string target) {
	std::string	cmp[3] = {"Presidential", "Shrubbery", "Robotomy"};
	int	tmp = 0;
	
	for (int i = 0; i < 3; i++) {
		if (!cmp[i].compare(name)) {
			tmp = i;
			break ;
		}
		else if (i == 2)
			throw BadInputException();
	}
	
	switch(tmp) {
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new ShrubberyCreationForm(target));
		case 2:
			return (new RobotomyRequestForm(target));
	}
	
	return (NULL);
}

const char* Intern::BadInputException::what() const throw() {
	return "Not a valid form name";
}

Intern::~Intern() {
	return ;
}