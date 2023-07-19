/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:08:38 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/19 17:02:41 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <iterator>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
    	iterator end() {
			return this->c.end();
		}
};

#endif
