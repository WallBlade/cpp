/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:17:15 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/19 17:08:22 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
		Span rg = Span(10000);

		rg.addRange(0, 9999);

		std::cout << rg.shortestSpan() << std::endl;
		std::cout << rg.longestSpan() << std::endl;
		
		rg.addNumber(15000);
		rg.addNumber(15001);
	} catch (std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	return 0;
}
