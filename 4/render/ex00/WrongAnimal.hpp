/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:41:47 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:41:49 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// WrongAnimal.hpp

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};

#endif

