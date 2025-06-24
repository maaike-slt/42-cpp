/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:39:26 by msloot            #+#    #+#             */
/*   Updated: 2025/06/24 19:46:20 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEFAULT	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

void	ft_toupper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main(int argc, char **argv)
{
	size_t	i;

	if (argc == 1)
	{
		std::cout << DEFAULT << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		ft_toupper(argv[i]);
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
