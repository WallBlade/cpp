/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:27 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/26 20:28:57 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}

	std::ifstream in(av[1]);

	if (!in.is_open()) {
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}

	BitcoinExchange test;

	test.loadDataBase();
	test.calculateRatio(in);

	return (0);
}