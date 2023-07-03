/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:23:37 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 13:34:25 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
	std::cout << "Bureaucrat : " << _name << " has been created" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name), _grade(cpy._grade) {
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy) {
	if (this != &cpy)
		this->_grade = cpy._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName() const {
	return this->_name;
}

const int	&Bureaucrat::getGrade() const {
	return this->_grade;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bu) {
	out << bu.getName() << ", bureaucrat grade : " << bu.getGrade();
	return (out);
}

void	Bureaucrat::increaseGrade(int amount) {
	_grade -= amount;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(int amount) {
	_grade += amount;
	if (_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form) {
	if (form.isSigned())
		std::cout << this->_name << " signed : " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign : " <<
			form.getName() << " because he stuck a cucumber up his bum" << std::endl;

}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}