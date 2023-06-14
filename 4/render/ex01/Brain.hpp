/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:50:11 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 09:50:20 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Brain.hpp

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100];

public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};

#endif

