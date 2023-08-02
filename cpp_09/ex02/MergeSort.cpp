/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:40 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/02 17:57:59 by zel-kass         ###   ########.fr       */
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

// void	PmergeMe::sortFordJohnson(std::list<int> &array) {
// 	mergeSort()
// }

// void	PmergeMe::sortFordJohnson() {
// 	mergeSort(0, vctr.size() - 1);

// 	std::cout << '\n';
// 	std::cout << "Process: ";
// 	for (size_t i = 0; i < vctr.size(); i++)
// 		std::cout << vctr[i] << " ";
// 	std::cout << '\n';

// 	insertionSort();
// }

// void	PmergeMe::mergeSort(int left, int right) {
// 	if (left >= right)
// 		return;

// 	int mid = left + (right - left) / 2;
// 	mergeSort(left, mid);
// 	mergeSort(mid + 1, right);
// 	merge(left, mid, right);
// }

// void	PmergeMe::merge(int left, int mid, int right) {
// 	std::vector<int> temp(right - left + 1);
// 	int i = left;
// 	int j = mid + 1;
// 	int k = 0;

// 	while (i <= mid && j <= right) {
// 		if (vctr[i] <= vctr[j])
// 			temp[k++] = vctr[i++];
// 		else
// 			temp[k++] = vctr[j++];
// 	}

// 	while (i <= mid)
// 		temp[k++] = vctr[i++];
// 	while (j <= right)
// 		temp[k++] = vctr[j++];
// 	for (i = left, k = 0; i <= right; ++i, ++k)
// 		vctr[i] = temp[k];
// }

// void	PmergeMe::insertionSort() {
// 	int n = vctr.size();
// 	for (int i = 1; i < n; ++i) {
// 		int key = vctr[i];
// 		int j = i - 1;

// 		while (j >= 0 && vctr[j] > key) {
// 			vctr[j + 1] = vctr[j];
// 			--j;
// 		}
// 		vctr[j + 1] = key;
// 	}
// }