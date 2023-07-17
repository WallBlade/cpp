/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:17:15 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/17 18:25:59 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> numbers;
	for (int i = 0; i < 50; i++)
		numbers.push_back(i);
	try {
		std::vector<int>::iterator result = easyfind(numbers, 51);
		std::cout << "Value found at : " << *result << std::endl;
	} catch (const ValueNotFound &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	return (0);
}