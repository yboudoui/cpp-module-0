/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:20:28 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/12 08:27:47 by yboudoui         ###   ########.fr       */
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

Zombie	*zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
	return (horde);
}

int	main(void)
{
	Zombie* zombie1 = newZombie("Alice");
	zombie1->announce();
	delete zombie1;
	randomChump("Bob");
	Zombie* horde = zombieHorde(5, "Horde Zombie");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}

