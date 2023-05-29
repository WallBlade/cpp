/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:57:28 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 17:02:53 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie	*horde;
	int		N = 5;

	horde = zombieHorde(N, "Horde de trouducs");
	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete []horde;

    return 0;
}