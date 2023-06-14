/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:22:21 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:22:29 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FragTrap.hpp

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(const std::string& name);
    ~FragTrap();
    void highFivesGuys();
};

#endif

