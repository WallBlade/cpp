/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:59:12 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/02 18:54:06 by zel-kass         ###   ########.fr       */
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
	std::vector<int> mainChain;
	std::vector<int> pendElems;

	pairValues(mainChain, pendElems, vctr.size() - 1);
}