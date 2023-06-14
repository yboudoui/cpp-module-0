/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 09:31:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/01 09:48:23 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int ac, char *av[])
{
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (*(++av)) {
		std::string	s(*av);
		for (std::string::iterator it = s.begin(); it != s.end(); it++)
			std::cout << (char)std::toupper(*it);
	}
	std::cout << std::endl;
	return (0);
}
