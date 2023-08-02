/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:59:13 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/02 18:54:12 by zel-kass         ###   ########.fr       */
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

		void		fillContainers(int num);
		
		void		sortFordJohnson();
		void		pairValues(std::vector<int> &mainChain, std::vector<int> &pendElems);

		std::list<int>		lst;
		std::vector<int>	vctr;
};

#endif