/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:23:35 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/24 15:25:15 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException() throw() {}
				~GradeTooHighException() throw() {}
				const char *what() const throw() {
					return "Grade is too high";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException() throw() {}
				~GradeTooLowException() throw() {}
				const char *what() const throw() {
					return "Grade is too low";
				}
		};
		std::string			getName() const;
		int					getGrade() const;
		void				increaseGrade(int amount);
		void				decreaseGrade(int amount);
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bu);

#endif