/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 02:17:39 by apregitz          #+#    #+#             */
/*   Updated: 2025/09/23 02:42:57 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{
}

bool	PhoneBook::add_contact(
	std::string &first_name, 
	std::string &last_name, 
	std::string &nickname, 
	std::string &phone_number, 
	std::string &darkest_secret)
{
	_contacts[_index].set_first_name(first_name);
	_contacts[_index].set_last_name(last_name);
	_contacts[_index].set_nickname(nickname);
	_contacts[_index].set_phone_number(phone_number);
	_contacts[_index].set_darkest_secret(darkest_secret);
	_index++;
}
