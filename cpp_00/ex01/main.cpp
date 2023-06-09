/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:34:09 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/25 19:38:05 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main() {
	Phonebook pb;
	std::string	input;
	std::cout << "Welcome to my awesome Phonebook !" << std::endl;
	while (1)
	{
		std::cin.clear();
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		if (!(std::getline(std::cin, input)))
			break ;
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.searchContact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Wrong input" << std::endl;
	}
}