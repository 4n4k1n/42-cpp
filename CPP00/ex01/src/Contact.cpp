#include <Contact.hpp>
#include <cctype>
#include "color.hpp"

static bool	is_alpha(const std::string &str)
{
	for (char c: str)
	{
		if (!std::isalpha(c))
			return (false);
	}
	return (true);
}

static bool	is_digit(const std::string &str)
{
	for (char c: str)
	{
		if (!std::isdigit(c))
			return (false);
	}
	return (true);
}

bool	Contact::set_first_name(const std::string &first_name)
{
	if (first_name.empty() || !is_alpha(first_name))
		return (false);
	_first_name = first_name;
	return (true);
}

bool	Contact::set_last_name(const std::string &last_name)
{
	if (last_name.empty() || !is_alpha(last_name))
		return (false);
	_last_name = last_name;
	return (true);
}

bool	Contact::set_nickname(const std::string &nickname)
{
	if (nickname.empty() || !is_alpha(nickname))
		return (false);
	_nickname = nickname;
	return (true);
}

bool	Contact::set_phone_number(const std::string &phone_number)
{
	if (phone_number.empty() || !is_digit(phone_number))
		return (false);
	_phone_number = phone_number;
	return (true);
}

bool	Contact::set_darkest_secret(const std::string &darkest_secret)
{
	if (darkest_secret.empty() || !is_alpha(darkest_secret))
		return (false);
	_darkest_secret = darkest_secret;
	return (true);
}

std::string	Contact::get_first_name(void) const
{
	return (_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (_darkest_secret);
}
