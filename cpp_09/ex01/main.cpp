/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:30 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/31 18:13:41 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	RPN polish;
	if (ac == 2) {
		std::string exp = av[1];
		int	result = polish.process(exp);
		if (result != -1)
			std::cout << result << std::endl;
	} else {
		std::cerr << "Error: program usage './rpn 'arg''" << std::endl;
		return (1);
	}
	return (0);
}