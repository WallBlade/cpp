/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:41:02 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/05 18:16:57 by zel-kass         ###   ########.fr       */
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
		Form	&operator=(const Form &cpy);
		Form(const Form &cpy);
		Form(const std::string name, const int sGrade, const int eGrade);
		virtual ~Form();

		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				const char *what() const throw();
		};

		void				setName(const std::string name);
		void				setSignGrade(const int signGrade);
		void				setExecGrade(const int execGrade);
		bool				isSigned() const;
		std::string			getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat &john);
		void				execute(Bureaucrat const &executor) const;
		
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
		virtual void		performAction() const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form &form);

#endif