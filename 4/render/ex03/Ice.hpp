/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:05:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 10:06:00 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ice.hpp

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    ~Ice();
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);

    AMateria* clone() const;
};

#endif

