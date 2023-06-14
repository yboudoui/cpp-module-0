/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:05:31 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 10:05:33 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AMateria.hpp

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {
protected:
    std::string type;

public:
    AMateria(const std::string& type);
    virtual ~AMateria();
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria& other);

    std::string const& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif

