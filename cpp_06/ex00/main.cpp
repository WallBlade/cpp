/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:13:56 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/06 22:54:35 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1);
		std::string av = argv[1];
		ScalarConverter::convert(av);
	} else
		std::cout << "Program usage : ./convert 'value'" << std::endl;

	return (0);
}