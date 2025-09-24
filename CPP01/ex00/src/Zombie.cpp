/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:15:14 by anakin            #+#    #+#             */
/*   Updated: 2025/09/24 10:31:14 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
	if (name.empty())
		_name = "Zombie";
	else
		_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << _name << ": destructed" << std::endl;
}

void	Zombie::announce(void)
{
	if (_name == "foo")
		std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
	else
		std::cout << "<" << _name << ">: BraiiiiiiinnnzzzZ.." << std::endl;
}
