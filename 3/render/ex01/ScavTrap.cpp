/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:20:28 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:20:30 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ScavTrap.cpp

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap <" << name << "> is ready for action!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap <" << name << "> is going offline. Goodbye, world!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap <" << name << "> is now in Gatekeeper mode!" << std::endl;
}

