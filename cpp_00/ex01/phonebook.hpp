/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 19:38:08 by msloot            #+#    #+#             */
/*   Updated: 2025/06/25 21:12:38 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <unistd.h>

class Phonebook
{
private:
	Contact	contact[8];
	size_t	len;
public:
	Phonebook(/* args */);
	~Phonebook();
};

class	Contact
{
private:
	size_t	nbr;
	char	*first_name;
	char	*last_name;
	char	*nickname;
	size_t	phone_number;
	char	*darkest_secret;
public:
	Contact(/* args */);
	~Contact();
};

#endif