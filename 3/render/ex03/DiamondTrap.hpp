/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:31:16 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:31:18 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DiamondTrap.hpp

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    void whoAmI();
};

#endif

