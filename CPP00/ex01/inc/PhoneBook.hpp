#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact			_contacts[MAX_CONTACTS];
		unsigned int	_index;
	public:
		PhoneBook();
		~PhoneBook();
		bool	add_contact(
			std::string &fist_name, 
			std::string &last_name, 
			std::string &nickname, 
			std::string &phone_number, 
			std::string &darkest_secret);
		bool	print_contact(int id);
};

#endif