/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 21:05:04 by msloot            #+#    #+#             */
/*   Updated: 2025/08/08 17:19:18 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amt = 0;
}

PhoneBook::~PhoneBook()
{
}

bool	PhoneBook::input(std::string input)
{
	if (input == "ADD")
	{
		this->_add_contact();
		if (this->amt < 8)
			this->amt++;
		return (true);
	}
	else if (input == "SEARCH")
	{
		// display contacts
		return (true);
	}
	else if (input == "EXIT")
		return (false);
	return (true);
}

bool	PhoneBook::_add_contact()
{
	Contact	contact;
	size_t	contact_index;

	if (this->amt < 8)
		contact_index = this->amt + 1;
	else
		contact_index = this->amt;
	contact = this->contact[contact_index];
	contact.read();
	return (true);
}
