/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:20:25 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/19 17:05:10 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <algorithm>

class Span {
	public:
		Span();
		Span(unsigned int max);
		Span(const Span &cpy);
		~Span();

		Span	&operator=(const Span &cpy);

		class OutOfBoundsException : public std::exception {
			const char *what() const throw();
		};
		
		class TooFewValuesException : public std::exception {
			const char *what() const throw();
		};

		void	addRange(int start, int end);
		void	addNumber(unsigned int value);
		int		shortestSpan();
		int		longestSpan();
		int		tabLen();
	private:
		int 		*_tab;
		unsigned int _max;
		unsigned int _count;
};

#endif