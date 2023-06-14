/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:39:46 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 08:39:49 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

HumanB::~HumanB() {
    delete weapon;
}

void HumanB::setWeapon(const Weapon& weapon) {
    delete this->weapon;
    this->weapon = new Weapon(weapon.getType());
}

void HumanB::attack() const {
    if (weapon != nullptr) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " is unarmed and cannot attack" << std::endl;
    }
}

