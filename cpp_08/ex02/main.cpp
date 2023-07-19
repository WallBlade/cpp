/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:17:15 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/19 17:02:36 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	// std::list<int> mstack; // Use std::list instead of MutantStack

    // mstack.push_back(5);
    // mstack.push_back(17);
    // std::cout << mstack.back() << std::endl;
    // mstack.pop_back();
    // std::cout << mstack.size() << std::endl;
    // mstack.push_back(3);
    // mstack.push_back(5);
    // mstack.push_back(737);
    // //[...]
    // mstack.push_back(0);

    // std::list<int>::iterator it = mstack.begin();
    // std::list<int>::iterator ite = mstack.end();
    // while (it != ite) {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
    return 0;
}