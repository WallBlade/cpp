/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:54:23 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/21 21:04:26 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : contactCount(0) {}
Phonebook::~Phonebook() {}

void	Phonebook::addContact() {
	if (contactCount >= 8) {
		std::cout << "Phonebook is full, oldest contact will be replaced" << std::endl;
		for (int i = 0; i < MAX_CONTACTS - 1; i++)
			contacts[i] = contacts[i + 1];
		contacts[MAX_CONTACTS - 1].setInfos();
	}
	else {
		contacts[contactCount++].setInfos();
		std::cout << "Contact added successfully !" << std::endl;
	}
}

void	Phonebook::searchContact() {
	std::cout << "	Index | First name | Last name | Nickname" << std::endl;
	// std::cout << std::setfill('-') << std::setw(40) << "\n";
    // std::cout << std::setfill(' ');
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << std::setw(10) << i
			<< " |" << std::setw(10) << contacts[i].getFirstName() 
			<< " |" << std::setw(10) << contacts[i].getLastName() 
			<< " |" << std::setw(10) << contacts[i].getNickName() << std::endl;
	}
	if (contactCount == 0) {
		std::cout << "No contact found" << std::endl;
		return ;
	}
	int index;
	std::cout << "Enter the index of the contact you want to display :" << std::endl;
	std::cin >> index;
	if (index < 0 || index >= contactCount) {
		std::cout << "Bad input" << std::endl;
		return ;
	}
	contacts[index].displayInfos();
}