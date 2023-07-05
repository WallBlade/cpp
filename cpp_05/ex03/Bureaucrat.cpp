/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:23:37 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/05 18:19:57 by zel-kass         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name), _grade(cpy._grade) {}

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
	std::cout << _name << " got promoted ! His grade now is : " << _grade << std::endl;
}

void	Bureaucrat::decreaseGrade(int amount) {
	_grade += amount;
	if (_grade > 150)
		throw GradeTooLowException();
	std::cout << _name << " got demoted ! His grade now is : " << _grade << std::endl;
}

void	Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed : " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't sign : " <<
			form.getName() << " because he stuck a cucumber up his bum" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form) const {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed : " << form.getName() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't sign : " <<
			form.getName() << ". ";
		std::cout << e.what() << std::endl;
	}

}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Default Bureaucrat destructor called" << std::endl;
}