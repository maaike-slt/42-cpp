/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:38:08 by msloot            #+#    #+#             */
/*   Updated: 2025/08/02 19:21:59 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <unistd.h>
#include <stdio.h>

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
	size_t	amt;

	bool	_add_contact();
public:
	PhoneBook();
	~PhoneBook();

	bool	input(std::string input);
};

#endif