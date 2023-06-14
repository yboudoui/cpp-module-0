/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:46:38 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:54:46 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp

#include <iostream>
#include <memory>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; // Should not create a leak
    delete i;

    std::cout << std::endl;

    const int animalCount = 10;
    std::unique_ptr<Animal> animals[animalCount];
    for (int i = 0; i < animalCount; i++) {
        if (i < animalCount / 2) {
            animals[i] = std::make_unique<Dog>();
        } else {
            animals[i] = std::make_unique<Cat>();
        }
    }

    for (int i = 0; i < animalCount; i++) {
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    return 0;
}

