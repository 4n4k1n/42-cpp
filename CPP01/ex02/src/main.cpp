/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:38:42 by apregitz          #+#    #+#             */
/*   Updated: 2025/09/24 14:57:33 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Address:\n"
		<< "	string   : " << &string << "\n"
		<< "	stringPTR: " << stringPTR << "\n"
		<< "	stringREF: " << &stringPTR << "\n"
		<< "Value:\n"
		<< "	string   : " << string << "\n"
		<< "	stringPTR: " << *stringPTR << "\n"
		<< "	stringREF: " << stringREF << std::endl;

	return (0);
}
