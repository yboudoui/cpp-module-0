/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:05:44 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 10:05:46 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AMateria.cpp

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& other) : type(other.type) {}

AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

std::string const& AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* uses " << type << " materia on " << target.getName() << " *" << std::endl;
}

