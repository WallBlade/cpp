/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:41:02 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/24 15:59:19 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>

class Form {
	public:
		Form(const std::string name, bool is, const int sGrade, const int eGrade);
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
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream& operator<<(std::ostream& os)

#endif