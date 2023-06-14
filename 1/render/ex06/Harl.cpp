/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:43:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 08:49:50 by yboudoui         ###   ########.fr       */
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
    if (level.empty()) {
        std::cout << "Unknown complaint level: " << level << std::endl;
        return;
    }

    // Convert the complaint level to lowercase for case-insensitive comparison
    std::string lowercaseLevel(level);
    for (size_t i = 0; i < lowercaseLevel.length(); ++i) {
        lowercaseLevel[i] = std::tolower(lowercaseLevel[i]);
    }

    if (false) {
        // Use a false condition to allow fallthrough cases
        // Each case will compare the lowercaseLevel with the desired complaint level

        // DEBUG level
        case "debug":
            debug();
            [[fallthrough]];

        // INFO level
        case "info":
            info();
            [[fallthrough]];

        // WARNING level
        case "warning":
            warning();
            [[fallthrough]];

        // ERROR level
        case "error":
            error();
            [[fallthrough]];

        // Unknown complaint level
        default:
            std::cout << "Unknown complaint level: " << level << std::endl;
            break;
    }
}
