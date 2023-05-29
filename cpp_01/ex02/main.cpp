/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:07:22 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 17:25:55 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {	
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	
	std::cout << "string ptr:      " << &str << "\n";
	std::cout << "stringPTR ptr:   " << stringPTR << "\n";
	std::cout << "stringREF ptr:   " << &stringREF << "\n";

	std::cout << "string value:    " << str << "\n";
	std::cout << "stringPTR value: " << *stringPTR << "\n";
	std::cout << "stringREF value: " << stringREF << "\n";

	return (0);
}