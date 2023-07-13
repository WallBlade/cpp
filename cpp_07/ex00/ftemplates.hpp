/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ftemplates.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:05:42 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/13 16:35:51 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FTEMPLATES_HPP__
#define __FTEMPLATES_HPP__

#include <iostream>

template<typename T>
void	swap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

template<typename T>
T	max(T a, T b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

#endif