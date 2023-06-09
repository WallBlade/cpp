/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:17:59 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/11 16:08:49 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void) {
    ClapTrap robinson("Robinson");
    ClapTrap dyson("Dyson");

    std::cout << std::endl;

    robinson.attack("Mauricio");
    robinson.takeDamage(20);
    robinson.beRepaired(10);
    dyson.attack("Jules");
    dyson.attack("Victoria");
    dyson.attack("Neymar");
    dyson.attack("Mbappe");
    dyson.attack("Messi");
    dyson.takeDamage(2);
    dyson.beRepaired(10);

    std::cout << std::endl;

    ScavTrap roland("Roland");
    ScavTrap pogba("Pogba");

    std::cout << std::endl;

    roland.attack("Mauricio");
    roland.takeDamage(20);
    roland.beRepaired(10);
    pogba.attack("Jules");
    pogba.attack("Victoria");
    pogba.attack("Neymar");
    pogba.attack("Mbappe");
    pogba.attack("Messi");
    pogba.takeDamage(2);
    pogba.beRepaired(10);
    pogba.guardGate();
    roland.guardGate();

    std::cout << std::endl;
}