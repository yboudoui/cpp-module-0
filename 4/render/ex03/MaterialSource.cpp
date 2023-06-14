/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:08:09 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 10:08:10 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// MateriaSource.cpp

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        learnedMaterias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete learnedMaterias[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; i++) {
        if (other.learnedMaterias[i]) {
            learnedMaterias[i] = other.learnedMaterias[i]->clone();
        } else {
            learnedMaterias[i] = nullptr;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            delete learnedMaterias[i];
            if (other.learnedMaterias[i]) {
                learnedMaterias[i] = other.learnedMaterias[i]->clone();
            } else {
                learnedMaterias[i] = nullptr;
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!learnedMaterias[i]) {
            learnedMaterias[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < 4; i++) {
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type) {
            return learnedMaterias[i]->clone();
        }
    }
    return nullptr;
}

