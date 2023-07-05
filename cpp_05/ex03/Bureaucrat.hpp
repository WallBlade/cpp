/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:23:35 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/05 18:21:09 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include "AForm.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat	&operator=(const Bureaucrat &cpy);
		~Bureaucrat();
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
		
		const std::string	&getName() const;
		const int			&getGrade() const;
		void				increaseGrade(int amount);
		void				decreaseGrade(int amount);
		void				signForm(Form &form);
		void				executeForm(Form const &form) const;
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bu);

#endif