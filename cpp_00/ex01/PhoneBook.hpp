/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:38:08 by msloot            #+#    #+#             */
/*   Updated: 2025/09/10 18:01:50 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];

	bool _add_contact();
	bool _search_contact();

public:
	PhoneBook();
	~PhoneBook();

	size_t amt;
	size_t index;

	bool input(std::string input);
};

#endif