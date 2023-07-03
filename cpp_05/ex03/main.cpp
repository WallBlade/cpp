/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:00:11 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 17:48:25 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	std::cout << "----------------------------------------" << std::endl;
	
	try {
		Bureaucrat hooman("Hooman", 100);
		std::cout << hooman << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try {
		Bureaucrat wooman("Wooman", 200);
		std::cout << wooman << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try {
		Bureaucrat dooman("Dooman", 140);
		std::cout << dooman << std::endl;
		dooman.decreaseGrade(11);
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try {
		Bureaucrat fooman("Fooman", 5);
		std::cout << fooman << std::endl;
		fooman.increaseGrade(5);
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	
	try {
		Bureaucrat	mooman("Mooman", 50);
		PresidentialPardonForm	president("petition");
		std::cout << mooman << std::endl;
		mooman.increaseGrade(45);
		std::cout << mooman << std::endl;
		president.beSigned(mooman);
		mooman.signForm(president);
		president.execute(mooman);
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try {
		Bureaucrat	nooman("Nooman", 50);
		ShrubberyCreationForm	shrub("contract");
		std::cout << nooman << std::endl;
		nooman.decreaseGrade(50);
		std::cout << nooman << std::endl;
		shrub.beSigned(nooman);
		nooman.signForm(shrub);
		shrub.execute(nooman);
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try {
		Bureaucrat	zooman("Zooman", 145);
		RobotomyRequestForm	robot("request");
		std::cout << zooman << std::endl;
		zooman.increaseGrade(100);
		std::cout << zooman << std::endl;
		robot.beSigned(zooman);
		zooman.signForm(robot);
		robot.execute(zooman);
		robot.execute(zooman);
		robot.execute(zooman);
		robot.execute(zooman);
		robot.execute(zooman);
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
		
	std::cout << "----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try {
		Bureaucrat	vooman("Vooman", 1);
		Intern		sooman;
		Form		*rrf;
		
		rrf = sooman.makeForm("Presidential", "Vooman");
		rrf->beSigned(vooman);
		vooman.signForm(*rrf);
		rrf->execute(vooman);
		delete rrf;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	
	std::cout << "----------------------------------------" << std::endl;
	
	return (0);
}