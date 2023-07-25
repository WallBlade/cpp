/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:27 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/25 17:41:37 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	std::ifstream in(av[1]);
	if (ac != 2 || !in.is_open()) {
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}

	return (0);
}