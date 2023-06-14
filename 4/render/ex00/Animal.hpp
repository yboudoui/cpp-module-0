/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:38:50 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:38:53 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.hpp

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(const std::string& type);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
};

#endif

