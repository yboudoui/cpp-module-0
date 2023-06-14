/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 07:40:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/01 13:46:13 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <sstream>

# define MAX_CONTACT 8

class PhoneBook
{
	private:
		size_t	_contactCount;
		Contact	_contactList[MAX_CONTACT];

	public:
		PhoneBook();
		void	add(void);
		void	diplayContacts(void);
		void	search(void);
};

#endif
