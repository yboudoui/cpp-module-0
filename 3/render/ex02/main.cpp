/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:18:32 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:23:02 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap("Clap-9000");
    ClapTrap enemy("Evil Bot");

    clapTrap.attack("Evil Bot");
    enemy.takeDamage(3);
    enemy.beRepaired(2);
    enemy.takeDamage(5);
    enemy.takeDamage(10);
    clapTrap.beRepaired(4);
    clapTrap.attack("Evil Bot");
    clapTrap.attack("Evil Bot");

    return 0;
}

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clapTrap("Clap-9000");
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);

    ScavTrap scavTrap("Scavenger");
    scavTrap.attack("Intruder");
    scavTrap.guardGate();

    return 0;
}

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clapTrap("Clap-9000");
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);

    ScavTrap scavTrap("Scavenger");
    scavTrap.attack("Intruder");
    scavTrap.guardGate();

    FragTrap fragTrap("Destructor");
    fragTrap.attack("Target");
    fragTrap.highFivesGuys();

    return 0;
}

