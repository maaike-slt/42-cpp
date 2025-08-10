/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:38:08 by msloot            #+#    #+#             */
/*   Updated: 2025/08/10 16:54:30 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <unistd.h>
#include <stdio.h>
#include <iomanip>

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
	
	void	_add_contact();
	void	_search_contact();
	public:
	PhoneBook();
	~PhoneBook();
	
	size_t	amt;
	size_t	index;

	bool	input(std::string input);
};

#endif