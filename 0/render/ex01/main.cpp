/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:14:03 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/01 13:40:22 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int ac, char *av[])
{
	std::string	input;
	PhoneBook	phoneBook;

	(void)av;
	if (ac != 1)
		return (1);
	while (!std::cin.eof())
	{
		std::cout << "Commande : ";
		if (std::cin >> input)
			std::cin.clear();
		if (input.compare("ADD") == 0)
			phoneBook.add();
		if (input.compare("SEARCH") == 0)
		{
			phoneBook.diplayContacts();
			phoneBook.search();
		}
		if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
