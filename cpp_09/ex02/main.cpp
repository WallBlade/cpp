/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:37 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/07 18:37:13 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac < 3) {
		std::cerr << "Error: not enough arguments.\n";
		return (1);
	}
	
	PmergeMe fdj;
	PmergeMe bns;
	std::vector<int>	vctr;
	std::deque<int>		deque;

	for (int i = 1; i < ac; i++) {
		for (int j = 0; av[i][j]; j++) {
			if (!isdigit(av[i][j])) {
				std::cerr << "Error: bad input.\n";
				return (1);
			}
		}
		int num = atoi(av[i]);
		if (num < 0) {
			std::cerr << "Error: bad input.\n";
			return (1);
		}
		deque.push_back(num);
		vctr.push_back(num);
	}
	
	std::cout << '\n';
	std::cout << "Before:	";
	for (size_t i = 0; i < vctr.size(); i++)
		std::cout << vctr[i] << " ";
	std::cout << '\n';

	clock_t start = std::clock();
	fdj.sortFordJohnson(vctr);
	clock_t end = std::clock();
	double time_vector = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
	std::cout << '\n';

	std::cout << "After:	";
	for (size_t i = 0; i < vctr.size(); i++)
		std::cout << vctr[i] << " ";
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "Time to process a range of " << vctr.size() << " elements with std::vector : " << time_vector << " us\n";

	std::cout << '\n';
	std::cout << "Before:	";
	for (size_t i = 0; i < deque.size(); i++)
		std::cout << deque[i] << " ";
	std::cout << '\n';

	start = std::clock();
	bns.sortFordJohnson(deque);
	end = std::clock();
	time_vector = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
	std::cout << '\n';

	std::cout << "After:	";
	for (size_t i = 0; i < deque.size(); i++)
		std::cout << deque[i] << " ";
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << time_vector << " us\n";

	return (0);
}