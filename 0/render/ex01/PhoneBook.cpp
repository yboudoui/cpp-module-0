/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 07:40:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/01 13:44:20 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_contactCount = 0;
}

void	PhoneBook::add(void)
{
	std::string	input;
	size_t		id;

	id = this->_contactCount - (this->_contactCount == MAX_CONTACT);
	for (size_t i = 0; i < MAX_FIELD && !std::cin.eof(); i++) {
		std::cout << fieldsInput[i] << ": ";
		std::cin >> input;
		_contactList[id].set(fieldsList[i], input);
	}
	this->_contactCount += (this->_contactCount < MAX_CONTACT);
	return ;
}

static void	display(std::string s[4])
{
	std::cout << "|";
	for (size_t i = 0; i < 4; i++)
		std::cout << std::right << std::setw(10)
		<< ((s[i].length() > 10) ? s[i].substr(0, 9)+"." : s[i]) << "|";
	std::cout << std::endl;
}

void	PhoneBook::diplayContacts(void)
{
	std::stringstream stream;

	display((std::string[4]){"ID", "FIRSTNAME", "LASTNAME", "NICKNAME"});
	for (size_t i = 0; i < this->_contactCount; i++) {
		stream << i;
		display((std::string[4]){ stream.str(),
			*this->_contactList[i].get(FIRSTNAME),
			*this->_contactList[i].get(LASTNAME),
			*this->_contactList[i].get(NICKNAME),
		});
		stream.str("");
	}
	return ;
}

void	PhoneBook::search(void)
{
	size_t	id;

	while (!std::cin.eof()) {
		std::cout << "Index : ";
		std::cin >> id;
		if (id >= 0 && id <= this->_contactCount)
			break ;
		std::cout << "Index out of range" << std::endl;
	}
	for (size_t i = 0; i < MAX_FIELD; i++)
		std::cout
		<< fieldsInput[i] << " : "
		<< *this->_contactList[id].get(fieldsList[i]) << std::endl;
	return ;
}

