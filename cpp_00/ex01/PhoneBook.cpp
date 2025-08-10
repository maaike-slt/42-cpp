/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 21:05:04 by msloot            #+#    #+#             */
/*   Updated: 2025/08/10 18:27:26 by msloot           ###   ########.fr       */
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

bool	PhoneBook::input(std::string input)
{
	if (input == "ADD")
		this->_add_contact();
	else if (input == "SEARCH")
		this->_search_contact();
	else if (input == "EXIT")
		return (false);
	return (true);
}

void	PhoneBook::_add_contact()
{
	this->contact[this->index].read();
	if (this->amt < 8)
		this->amt++;
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::_search_contact()
{
	std::string	index;
	const char	*tmp;
	int			num;
	size_t		i;

	if (this->amt == 0)
	{
		std::cout << "No contacts to search through" << std::endl;
		return ;
	}
	i = 0;
	while (i < this->amt)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << "|";
		this->_format_search(contact[i].first_name);
		std::cout << "|";
		this->_format_search(contact[i].last_name);
		std::cout << "|";
		this->_format_search(contact[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter index for all contact inormation" << std::endl;
	if (!std::getline(std::cin, index))
		return ;
	if (index.length() > 1)
	{
		std::cout << "Invalid input length" << std::endl;
		return ;
	}
	if (!isdigit(index[0]))
	{
		std::cout << "Input must be a digit" << std::endl;
		return ;
	}
	tmp = index.c_str();
	num = atoi(tmp);
	if (num < 1 || num > this->amt)
	{
		std::cout << "Input index must be between 1 and " << this->amt << std::endl;
		return;
	}
	this->_individual_search(num);
}

void	PhoneBook::_format_search(std::string info)
{
	if (info.length() > 10)
	{
		std::cout << info.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << info;
}

void	PhoneBook::_individual_search(int num)
{
	std::cout << contact[num - 1].first_name << std::endl;
	std::cout << contact[num - 1].last_name << std::endl;
	std::cout << contact[num - 1].nickname << std::endl;
	std::cout << contact[num - 1].phone_number << std::endl;
	std::cout << contact[num - 1].darkest_secret << std::endl;
}