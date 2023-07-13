/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:05:39 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/13 16:58:39 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	print(const T& elem) {
	std::cout << elem << " ";
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	
	::iter(intArray, 5, print<int>);
	std::cout << std::endl;
	
	::iter(charArray, 5, print<char>);
	std::cout << std::endl;

	return (0);
}