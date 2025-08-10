/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:11:38 by msloot            #+#    #+#             */
/*   Updated: 2025/08/10 18:27:39 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::cout << "Welcome to your awesome phonebook!" << std::endl;

	PhoneBook 	phone_book; 
	while (1)
	{
		std::cout << "Input: ADD, SEARCH, EXIT" << std::endl;
		std::string	input;
		if (!std::getline(std::cin, input))
			break ;
		if (!phone_book.input(input))
			break ;
	}
	return (0);
}
