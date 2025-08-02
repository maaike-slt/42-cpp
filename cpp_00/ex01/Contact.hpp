/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:48:40 by msloot            #+#    #+#             */
/*   Updated: 2025/08/02 19:21:45 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <unistd.h>

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
	Contact();
	~Contact();
};

#endif
