/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:06:09 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 10:06:14 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ice.cpp

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

