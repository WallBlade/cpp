/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:28:06 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/25 19:53:52 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

void	Contact::setInfos()
{
	std::string input;
	input = "";
    std::cout << "Enter first name: ";
    while (input.empty()) {
		if (!(std::getline(std::cin, input)))
			return ;    
    }
	firstName = input;
	input = "";
    std::cout << "Enter last name: ";
	while (input.empty()) {
		if (!(std::getline(std::cin, input)))
			return ;    
    }
    lastName = input;
	input = "";
    std::cout << "Enter nick name: ";
	while (input.empty()) {
		if (!(std::getline(std::cin, input)))
			return ;    
    }
    nickName = input;
	input = "";
    std::cout << "Enter phone number: ";
	while (input.empty()) {
		if (!(std::getline(std::cin, input)))
			return ;    
    }
    phoneNumber = input;
	input = "";
    std::cout << "Enter darkest secret: ";
	while (input.empty()) {
		if (!(std::getline(std::cin, input)))
			return ;    
    }
    darkestSecret = input;
	std::cout << "Contact added successfully !" << std::endl;
}

void	Contact::displayInfos()
{
	std::cout << "First name : " << firstName << std::endl;
	std::cout << "Last name : " << lastName << std::endl;
	std::cout << "Nick name : " << nickName << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
	std::cout << "Darkest secret : " << darkestSecret << std::endl;
}

std::string	Contact::getFirstName() const
{
	return (this->firstName);
}

std::string	Contact::getLastName() const
{
	return (this->lastName);
}

std::string	Contact::getNickName() const
{
	return (this->nickName);
}