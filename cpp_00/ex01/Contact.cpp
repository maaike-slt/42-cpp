/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:48:38 by msloot            #+#    #+#             */
/*   Updated: 2025/09/10 18:04:22 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::~Contact()
{
}

bool Contact::read()
{
	std::cout << "First Name: ";
	if (!std::getline(std::cin, this->first_name))
		return (false);
	while (this->first_name == "")
	{
		std::cout << "This field cannot be left empty" << std::endl;
		std::cout << "First Name: ";
		if (!std::getline(std::cin, this->first_name))
			return (false);
	}

	std::cout << "Last Name: ";
	if (!std::getline(std::cin, this->last_name))
		return (false);
	while (this->last_name == "")
	{
		std::cout << "This field cannot be left empty" << std::endl;
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, this->last_name))
			return (false);
	}

	std::cout << "Nickname: ";
	if (!std::getline(std::cin, this->nickname))
		return (false);
	while (this->nickname == "")
	{
		std::cout << "This field cannot be left empty" << std::endl;
		std::cout << "Nickame: ";
		if (std::getline(std::cin, this->nickname))
			return (false);
	}

	std::cout << "Phone Number: ";
	if (!std::getline(std::cin, this->phone_number))
		return (false);
	while (this->phone_number == "")
	{
		std::cout << "This field cannot be left empty" << std::endl;
		std::cout << "Phone Number: ";
		if (!std::getline(std::cin, this->phone_number))
			return (false);
	}

	std::cout << "Darkest Secret: ";
	if (!std::getline(std::cin, this->darkest_secret))
		return (false);
	while (this->darkest_secret == "")
	{
		std::cout << "This field cannot be left empty" << std::endl;
		std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, this->darkest_secret))
			return (false);
	}
	std::cout << "Contact has succesfully been added" << std::endl;
	return (true);
}

void Contact::print()
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}

void Contact::print_table(size_t i)
{
	std::cout << std::setw(10) << i + 1;
	std::cout << "|";
	this->_format_search(this->first_name);
	std::cout << "|";
	this->_format_search(this->last_name);
	std::cout << "|";
	this->_format_search(this->nickname);
	std::cout << std::endl;
}

void Contact::_format_search(std::string info)
{
	if (info.length() > 10)
	{
		std::cout << info.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << info;
}
