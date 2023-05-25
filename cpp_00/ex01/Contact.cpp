/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:28:06 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/21 21:00:39 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

void	Contact::setInfos() {
	std::cout << "Enter first name :" << std::endl;
	std::cin >> firstName;
	std::cout << "Enter last name :" << std::endl;
	std::cin >> lastName;
	std::cout << "Enter nick name :" << std::endl;
	std::cin >> nickName;
	std::cout << "Enter phone number :" << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Enter darkest secret :" << std::endl;
	std::cin >> darkestSecret;
}

void	Contact::displayInfos() {
	std::cout << "First name : " << firstName << std::endl;
	std::cout << "Last name : " << lastName << std::endl;
	std::cout << "Nick name : " << nickName << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
	std::cout << "Darkest secret : " << darkestSecret << std::endl;
}

std::string	Contact::getFirstName() const{
	return (this->firstName);
}

std::string	Contact::getLastName() const{
	return (this->lastName);
}

std::string	Contact::getNickName() const{
	return (this->nickName);
}