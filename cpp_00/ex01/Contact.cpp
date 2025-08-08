/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:48:38 by msloot            #+#    #+#             */
/*   Updated: 2025/08/08 18:06:01 by msloot           ###   ########.fr       */
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

void	Contact::read()
{
	std::cout << "First Name: ";
	std::getline(std::cin, this->first_name);
	while (this->first_name == "")
	{
	std::cout << "This field cannot be left empty" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, this->first_name);
	}

	std::cout << "Last Name: ";
	std::getline(std::cin, this->last_name);
	while (this->last_name == "")
	{
	std::cout << "This field cannot be left empty" << std::endl;
	std::cout << "Last Name: ";
	std::getline(std::cin, this->last_name);
	}

	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	while (this->nickname == "")
	{
	std::cout << "This field cannot be left empty" << std::endl;
	std::cout << "Nickame: ";
	std::getline(std::cin, this->nickname);
	}

	std::cout << "Phone Number: ";
	std::getline(std::cin, this->phone_number);
	while (this->phone_number == "")
	{
	std::cout << "This field cannot be left empty" << std::endl;
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->phone_number);
	}

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
	while (this->darkest_secret == "")
	{
	std::cout << "This field cannot be left empty" << std::endl;
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
	}
	std::cout << "Contact has succesfully been added" << std::endl;
}