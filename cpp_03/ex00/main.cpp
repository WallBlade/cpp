/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:17:59 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 21:39:46 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
    ClapTrap defaultt;
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

}