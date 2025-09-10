/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 21:05:04 by msloot            #+#    #+#             */
/*   Updated: 2025/09/10 18:04:48 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amt = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

bool PhoneBook::input(std::string input)
{
	if (input == "ADD")
	{
		if (!this->_add_contact())
			return (false);
	}
	else if (input == "SEARCH")
		this->_search_contact();
	else if (input == "EXIT")
		return (false);
	return (true);
}

bool PhoneBook::_add_contact()
{
	if (!this->contact[this->index].read())
		return (false);
	if (this->amt < 8)
		this->amt++;
	this->index = (this->index + 1) % 8;
	return (true);
}

bool PhoneBook::_search_contact()
{
	std::string index;
	const char *tmp;
	int num;
	size_t i;

	if (this->amt == 0)
	{
		std::cout << "No contacts to search through" << std::endl;
		return (true);
	}
	i = 0;
	while (i < this->amt)
	{
		contact[i].print_table(i);
		i++;
	}
	std::cout << "Enter index for all contact inormation" << std::endl;
	if (!std::getline(std::cin, index))
		return (false);
	if (index.length() > 1)
	{
		std::cout << "Invalid input length" << std::endl;
		return (true);
	}
	if (!isdigit(index[0]))
	{
		std::cout << "Input must be a digit" << std::endl;
		return (true);
	}
	tmp = index.c_str();
	num = atoi(tmp);
	if (num < 1 || num > this->amt)
	{
		std::cout << "Input index must be between 1 and " << this->amt << std::endl;
		return (true);
	}
	this->contact[num - 1].print();
	return (true);
}
