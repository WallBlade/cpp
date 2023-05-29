/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:11:06 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 16:58:48 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}
