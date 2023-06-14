/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 07:40:58 by yboudoui          #+#    #+#             */
/*   Updated: 2023/06/01 12:28:59 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

typedef enum	e_contact_field {
	FIRSTNAME,
	LASTNAME,
	NICKNAME,
	PHONENUMBER,
	DARKESTSECRET,
	MAX_FIELD,
}	t_contact_field;

const t_contact_field	fieldsList[MAX_FIELD] = {
	FIRSTNAME,
	LASTNAME,
	NICKNAME,
	PHONENUMBER,
	DARKESTSECRET,
};

const std::string	fieldsInput[MAX_FIELD] = {
	"first name",
	"last name",
	"nick name",
	"phone number",
	"darkest secret",
};

class Contact
{
	private:
		std::string	_contactField[MAX_FIELD];
	public:
		void		set(t_contact_field field, std::string data);
		std::string	*get(t_contact_field field);
};

#endif
