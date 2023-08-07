/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:59:12 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/07 18:39:01 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cpy) : pairs(cpy.pairs) {}

PmergeMe::~PmergeMe() {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &cpy) {
	pairs = cpy.pairs;
	*this = cpy;
	return (*this);
}

void	PmergeMe::sortFordJohnson(std::vector<int> &vctr) {
	pairValues(vctr);
	std::sort(pairs.begin(), pairs.end(), comparePairs);
	insertPending(vctr);
}

void	PmergeMe::sortFordJohnson(std::deque<int> &deque) {
	pairValues(deque);
	std::sort(pairs.begin(), pairs.end(), comparePairs);
	insertPending(deque);
}

void	PmergeMe::pairValues(std::vector<int> &vctr) {
	size_t	len = vctr.size();
	odd = (len % 2 == 1);
	pending = -1;
	
	if (odd) {
		pending = vctr[len - 1];
		len -= 1;
	}
	
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
}

void	PmergeMe::pairValues(std::deque<int> &deque) {
	size_t	len = deque.size();
	odd = (len % 2 == 1);
	pending = -1;

	if (odd) {
		pending = deque[len - 1];
		len -= 1;
	}

	for (size_t i = 0; i < len; i += 2) {
		int first = deque[i];
		int	second = deque[i + 1];

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
}

int		PmergeMe::binarySearch(std::vector<int> &vctr, int value) {
	int start = 0;
	int end = vctr.size() - 1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (vctr[mid] == value)
			return mid;

		if (vctr[mid] < value) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return start;
}

int		PmergeMe::binarySearch(std::deque<int> &deque, int value) {
	int start = 0;
	int end = deque.size() - 1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (deque[mid] == value)
			return mid;

		if (deque[mid] < value) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return start;
}

void	PmergeMe::insertPending(std::vector<int> &vctr) {
	vctr.clear();

	for (size_t i = 0; i < pairs.size(); i++)
		vctr.push_back(pairs[i]. a);

	for (size_t i = 0; i < pairs.size(); i++)
		vctr.insert(vctr.begin() + binarySearch(vctr, pairs[i].b), pairs[i].b);

	if (odd && pending != -1)
		vctr.insert(vctr.begin() + binarySearch(vctr, pending), pending);
}

void	PmergeMe::insertPending(std::deque<int> &deque) {
	deque.clear();

	for (size_t i = 0; i < pairs.size(); i++)
		deque.push_back(pairs[i]. a);

	for (size_t i = 0; i < pairs.size(); i++)
		deque.insert(deque.begin() + binarySearch(deque, pairs[i].b), pairs[i].b);

	if (odd && pending != -1)
		deque.insert(deque.begin() + binarySearch(deque, pending), pending);
}

bool	comparePairs(const PmergeMe::t_pair &pair1, const PmergeMe::t_pair &pair2) {
	return (pair1.a < pair2.a);
}