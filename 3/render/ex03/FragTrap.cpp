/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:22:36 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:22:44 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FragTrap.cpp

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap <" << name << "> is ready to cause some chaos!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap <" << name << "> is going offline. Catch you on the flip side!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap <" << name << "> requests a high five! Who's in?" << std::endl;
}

