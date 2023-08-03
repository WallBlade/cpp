/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:59:12 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/03 17:02:21 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cpy) : lst(cpy.lst), vctr(cpy.vctr) {}

PmergeMe::~PmergeMe() {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &cpy) {
	this->lst = cpy.lst;
	this->vctr = cpy.vctr;
	return (*this);
}

void	PmergeMe::fillContainers(int num) {
	lst.push_back(num);
	vctr.push_back(num);
}

void	PmergeMe::sortFordJohnson() {

	pairValues();
	mergeMainChain();
	// insertPending(mainChain, pendElems);
}

void	PmergeMe::pairValues() {
	size_t	len = vctr.size();
	bool	odd = (len % 2 == 1);
	
	if (odd) len -= 1;
	
	for (size_t i = 0; i < len; i += 2) {
		int first = vctr[i];
		int	second = vctr[i + 1];

		t_pair pair;
		if (first > second) {
			pair.a = first;
			pair.b = second;
		} else {
			pair.a = second;
			pair.b = first;
		}
		pairs.push_back(pair);
	}
	std::cout << "Pairs Before: ";
	for (size_t i = 0; i < pairs.size(); ++i) {
		std::cout << "(" << pairs[i].a << ", " << pairs[i].b << ") ";
	}
	std::cout << std::endl;
}

void	PmergeMe::mergeMainChain() {
	std::sort(pairs.begin(), pairs.end(), comparePairs);
	std::cout << "Pairs After: ";
	for (size_t i = 0; i < pairs.size(); ++i) {
		std::cout << "(" << pairs[i].a << ", " << pairs[i].b << ") ";
	}
	std::cout << std::endl;
}

bool	comparePairs(const PmergeMe::t_pair &pair1, const PmergeMe::t_pair &pair2) {
	return (pair1.a < pair2.a);
}