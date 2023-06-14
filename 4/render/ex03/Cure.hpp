/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:06:26 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 10:06:28 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cure.hpp

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    ~Cure();
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);

    AMateria* clone() const;
};

#endif

