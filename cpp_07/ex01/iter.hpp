/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:38:33 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/13 16:44:51 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename T, typename Y, typename U>
void	iter(T &array, Y len, U func) {
	for (int i = 0; i < len; i++) {
		func(array[i]);
	}
}

#endif