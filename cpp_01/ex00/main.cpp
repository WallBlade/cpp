/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:57:28 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/29 14:05:07 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* z1 = newZombie("Franck");
    z1->announce();

    randomChump("Bernard");

    delete z1;

    return 0;
}