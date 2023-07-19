/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:17:15 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/19 16:34:54 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stdlib.h>

int main(int ac, char **av) {
	std::vector<int> numbers;
	(void)ac;
	for (int i = 0; i < 50; i++)
		numbers.push_back(i);
	try {
		std::vector<int>::iterator result = easyfind(numbers, atoi(av[1]));
		std::cout << "Value found at : " << *result << std::endl;
	} catch (const ValueNotFound &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	return (0);
}