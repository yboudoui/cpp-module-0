/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:41:12 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:41:14 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.hpp

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    void makeSound() const override;
};

#endif

