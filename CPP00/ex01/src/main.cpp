/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:22:03 by anakin            #+#    #+#             */
/*   Updated: 2025/09/23 17:32:55 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
// #include <iostream>

int	main(void)
{
	std::string	cmd;
	PhoneBook phonebook;

	while (true)
	{
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "EXIT")
			return (0);
	}
	return (0);
}
