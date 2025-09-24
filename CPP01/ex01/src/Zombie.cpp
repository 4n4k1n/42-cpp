/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:15:14 by anakin            #+#    #+#             */
/*   Updated: 2025/09/24 14:15:24 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "";
}

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

void	Zombie::set_name(std::string name)
{
	_name = name;
}
