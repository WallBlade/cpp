/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:00:11 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/24 15:36:33 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	return (0);
}