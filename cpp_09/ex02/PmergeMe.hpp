/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:59:13 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/07 17:02:05 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
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
		
		void		sortFordJohnson(std::vector<int> &vctr);
		void		sortFordJohnson(std::deque<int> &deque);
		void		pairValues(std::vector<int> &vctr);
		void		pairValues(std::deque<int> &deque);
		int			binarySearch(std::vector<int> &vctr, int value);
		int			binarySearch(std::deque<int> &deque, int value);
		void		insertPending(std::vector<int> &vctr);
		void		insertPending(std::deque<int> &deque);

		typedef struct s_pair {
			int a;
			int b;
		}			t_pair;
		
		std::vector<t_pair>	pairs;
		bool				odd;
		int					pending;
};

bool	comparePairs(const PmergeMe::t_pair &pair1, const PmergeMe::t_pair &pair2);

#endif