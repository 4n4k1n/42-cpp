#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact() = default;
		~Contact() = default;
		bool		set_first_name(const std::string &first_name);
		bool		set_last_name(const std::string &last_name);
		bool		set_nickname(const std::string &nickname);
		bool		set_phone_number(const std::string &phone_number);
		bool		set_darkest_secret(const std::string &darkest_secret);
	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
};

#endif