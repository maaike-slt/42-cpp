/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 21:05:04 by msloot            #+#    #+#             */
/*   Updated: 2025/08/02 19:22:09 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

bool	PhoneBook::input(std::string input)
{
	if (input == "ADD")
	{
		// add new contact
		if (this->amt < 8)
			this->amt++;
		return (true);
	}
	if (input == "SEARCH")
	{
		// display contacts
		return (true);
	}
	if (input == "EXIT")
		return (false);
	return (true);
}

bool	PhoneBook::_add_contact()
{
	std::string	input;
	bool	open = true;
	std::cout << "First Name: ";
	open = std::getline(std::cin, input);
	return (true);
}
