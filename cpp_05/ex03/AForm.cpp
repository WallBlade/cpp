/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:41:23 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 18:07:31 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::Form() : _name("Default"), _isSigned(0), _signGrade(0), _execGrade(0) {
	std::cout << "Form : default constructor called" << std::endl;
}

Form::Form(const std::string name, const int sGrade, const int eGrade)
			: _name(name), _isSigned(0), _signGrade(sGrade), _execGrade(eGrade) {
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

Form	&Form::operator=(const Form &cpy) {
	_isSigned = cpy._isSigned;
	setName(cpy._name);
	setSignGrade(cpy._signGrade);
	setExecGrade(cpy._execGrade);

	return *this;
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned),
			_signGrade(other._signGrade), _execGrade(other._execGrade) {}

void	Form::setName(const std::string name) {
	const std::string	*strPtr = &_name;
	const std::string	*tmpPtr = &name;
	std::string *mutableStrPtr = const_cast<std::string *>(strPtr);
	(void)mutableStrPtr;
	std::string *mutableTmpPtr = const_cast<std::string *>(tmpPtr);
	(void)mutableTmpPtr;

	mutableStrPtr = mutableTmpPtr;
}

void	Form::setSignGrade(const int signGrade) {
	const int	*intPtr = &_signGrade;
	const int	*tmpPtr = &signGrade;
	int			*mutableIntPtr = const_cast<int *>(intPtr);
	(void)mutableIntPtr;
	int			*mutableTmpPtr = const_cast<int *>(tmpPtr);
	(void)mutableTmpPtr;

	mutableIntPtr = mutableTmpPtr;
}

void	Form::setExecGrade(const int execGrade) {
	const int	*intPtr = &_execGrade;
	const int	*tmpPtr = &execGrade;
	int			*mutableIntPtr = const_cast<int *>(intPtr);
	(void)mutableIntPtr;
	int			*mutableTmpPtr = const_cast<int *>(tmpPtr);
	(void)mutableTmpPtr;

	mutableIntPtr = mutableTmpPtr;
}

bool		Form::isSigned() const {
	return this->_isSigned;
}

std::string	Form::getName() const {
	return this->_name;
}

int			Form::getSignGrade() const {
	return this->_signGrade;
}

int			Form::getExecGrade() const {
	return this->_execGrade;
}

void		Form::beSigned(Bureaucrat &john) {
	if (john.getGrade() <= _signGrade)
		_isSigned = 1;
	else
		throw (Form::GradeTooLowException());
}

void	Form::execute(Bureaucrat const &executor) {
	if (!isSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > _execGrade)
		throw GradeTooLowException();

	performAction();
}

std::ostream	&operator<<(std::ostream& os, const Form &form) {
	os << form.getName() << " form attributes :\n" << "is signed : " << form.isSigned() << "\nsign grade : " << form.getSignGrade() << "\nexec grade : " << form.getExecGrade() << std::endl;
}

Form::~Form() {}