/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:59:13 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/03 19:30:32 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include <iostream>
#include <algorithm>
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

		void		fillContainers(int num);
		
		void		sortFordJohnson();
		void		pairValues();
		void		mergeMainChain();
		int			binarySearch(std::vector<int> &sortedValues, int value);
		void		insertPending();

		std::list<int>		lst;
		std::vector<int>	vctr;

		typedef struct s_pair {
			int a;
			int b;
		}			t_pair;
		
		std::vector<t_pair>	pairs;
};

bool	comparePairs(const PmergeMe::t_pair &pair1, const PmergeMe::t_pair &pair2);

#endif