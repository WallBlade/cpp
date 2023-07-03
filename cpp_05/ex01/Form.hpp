/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:41:02 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 13:35:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(const std::string name, const int sGrade, const int eGrade);
		Form	&operator=(const Form &cpy);
		Form(const Form &cpy);
		~Form();

		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException() throw() {}
				~GradeTooHighException() throw() {}
				const char *what() const throw() {
					return "Grade too high";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException() throw() {}
				~GradeTooLowException() throw() {}
				const char *what() const throw() {
					return "Grade too low";
				}
		};

		void		setName(const std::string name);
		void		setSignGrade(const int signGrade);
		void		setExecGrade(const int execGrade);
		bool		isSigned() const;
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat &john);
		
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form &form);

#endif