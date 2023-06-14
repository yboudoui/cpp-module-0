/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 07:40:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/01 10:12:30 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set(t_contact_field field, std::string data)
{
	if (field < 0 || field >= MAX_FIELD)
		return ;
	this->_contactField[field] = data;
}

std::string	*Contact::get(t_contact_field field)
{
	if (field < 0 || field >= MAX_FIELD)
		return (NULL);
	return (&(this->_contactField[field]));
}
