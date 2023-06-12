/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:17:59 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/11 16:59:08 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void) {
    ClapTrap robinson("Robinson");
    ClapTrap dyson("Dyson");

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

    FragTrap pavard("Pavard");
    FragTrap dembele("Dembele");

    std::cout << std::endl;

    pavard.attack("Mauricio");
    pavard.takeDamage(20);
    pavard.beRepaired(10);
    dembele.attack("Jules");
    dembele.attack("Victoria");
    dembele.attack("Neymar");
    dembele.attack("Mbappe");
    dembele.attack("Messi");
    dembele.takeDamage(2);
    dembele.beRepaired(10);
    dembele.highFivesGuys();
    pavard.highFivesGuys();

    std::cout << std::endl;

}