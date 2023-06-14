/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:20:28 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 08:22:33 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

int	main(void)
{
	Zombie* zombie1 = newZombie("Alice");
	zombie1->announce();
	delete zombie1;
	randomChump("Bob");
	return (0);
}

