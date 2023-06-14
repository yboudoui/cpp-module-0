/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:31:28 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:31:30 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DiamondTrap.cpp

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name") {
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap <" << name << "> is ready to shine bright!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap <" << name << "> is going offline. See you in the shadows!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << name << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}

