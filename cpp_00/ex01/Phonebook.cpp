/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:54:23 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/25 19:34:19 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>

Phonebook::Phonebook() : contactCount(0) {}
Phonebook::~Phonebook() {}

void	Phonebook::addContact()
{
	if (contactCount >= 8) {
		std::cout << "Phonebook is full, oldest contact will be replaced" << std::endl;
		for (int i = 0; i < MAX_CONTACTS - 1; i++)
			contacts[i] = contacts[i + 1];
		contacts[MAX_CONTACTS - 1].setInfos();
	}
	else
		contacts[contactCount++].setInfos();
}

void	Phonebook::searchContact()
{
	if (contactCount == 0) {
		std::cout << "No contact found" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "\n";
	std::cout << std::setfill('-') << std::setw(50) << "\n";
    std::cout << std::setfill(' ');
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << std::setw(10) << i;
		std::cout << "|";
		if (contacts[i].getFirstName().length() > 9)
			std::cout << contacts[i].getFirstName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << contacts[i].getFirstName();
		std::cout << "|";
		if (contacts[i].getLastName().length() > 9)
			std::cout << contacts[i].getLastName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << contacts[i].getLastName();
		std::cout << "|";
		if (contacts[i].getNickName().length() > 9)
			std::cout << contacts[i].getNickName().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << contacts[i].getNickName();
		std::cout << "\n";
		std::cout << std::setfill('-') << std::setw(50) << "\n";
    	std::cout << std::setfill(' ');
	}
	int index;
	std::string input;
	std::cout << "Enter the index of the contact you want to display: ";
	if (!(std::getline(std::cin, input)))
	{
		std::cout << "Invalid input!" << std::endl;
		return;
	}
	std::istringstream iss(input);
	if (!(iss >> index))
	{
		std::cout << "Invalid input!" << std::endl;
		return;
	}
	if (index < 0 || index >= contactCount) {
		std::cout << "Bad input" << std::endl;
		return;
	}
	contacts[index].displayInfos();
}
