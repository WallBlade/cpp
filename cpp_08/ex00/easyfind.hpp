/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:17:32 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/17 18:22:37 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

class ValueNotFound : public std::exception {
	public:
		const char *what() const throw() {
			return "Value not found in container";
		}
};

template<typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end()) {
		return it;
	} else {
		throw ValueNotFound();
	}
}

#endif