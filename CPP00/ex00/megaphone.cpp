/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:12:47 by apregitz          #+#    #+#             */
/*   Updated: 2025/09/22 21:55:57 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string result;
	for (int i = 1; i < ac; i++)
	{
		std::string	str = av[i];
		for (char &c: str)
		{
			if (std::islower(c))
				c = c & ~' ';
		}
		result += str;
	}
	std::cout << result << std::endl;
	return (0);
}
