/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:18:20 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:18:22 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ClapTrap.cpp

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap <" << name << "> is ready for action!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap <" << name << "> is going offline. Goodbye, world!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints >= 1) {
        std::cout << "ClapTrap <" << name << "> attacks <" << target << ">, causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints -= 1;
    } else {
        std::cout << "ClapTrap <" << name << "> doesn't have enough energy to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        std::cout << "ClapTrap <" << name << "> takes " << amount << " points of damage!" << std::endl;
        hitPoints -= amount;
        if (hitPoints < 0) {
            hitPoints = 0;
        }
    } else {
        std::cout << "ClapTrap <" << name << "> is already out of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints > 0) {
        std::cout << "ClapTrap <" << name << "> is being repaired, gaining " << amount << " hit points!" << std::endl;
        hitPoints += amount;
    } else {
        std::cout << "ClapTrap <" << name << "> is already out of hit points! Repairs are futile!" << std::endl;
    }
}


