/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:48:27 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 17:27:14 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "AForm.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &cpy);
		Intern &operator=(const Intern &cpy);
		~Intern();
		class BadInputException : public std::exception {
			const char *what() const throw() {
				return "Not a valid form name";
			}
		};

		Form	*makeForm(const std::string name, const std::string target);
};

#endif