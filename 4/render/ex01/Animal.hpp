/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:51:12 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:51:13 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.hpp

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
protected:
    std::string type;
    Brain* brain;

public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    std::string getType() const;
    virtual void makeSound() const;
};

#endif

