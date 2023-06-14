/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:40:22 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:40:47 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dog.hpp

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    void makeSound() const override;
};

#endif

