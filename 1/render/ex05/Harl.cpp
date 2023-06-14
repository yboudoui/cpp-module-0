/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:43:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 08:44:00 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string& level) {
    typedef void (Harl::*ComplainFunc)();
    ComplainFunc complainFunc = nullptr;

    if (level == "DEBUG") {
        complainFunc = &Harl::debug;
    } else if (level == "INFO") {
        complainFunc = &Harl::info;
    } else if (level == "WARNING") {
        complainFunc = &Harl::warning;
    } else if (level == "ERROR") {
        complainFunc = &Harl::error;
    }

    if (complainFunc) {
        (this->*complainFunc)();
    } else {
        std::cout << "Unknown complaint level: " << level << std::endl;
    }
}

