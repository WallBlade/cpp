/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:42 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/02 17:57:57 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <string>
#include <stdlib.h>

class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cpy);
		~PmergeMe();

		PmergeMe	&operator=(const PmergeMe &cpy);

		void	fillContainers(int num);

		// void	sortFordJohnson();

		// void	mergeSort(int left, int right);
		// void	merge(int left, int mid, int right);
		// void	insertionSort();

		std::list<int>		lst;
		std::vector<int>	vctr;
};

#endif