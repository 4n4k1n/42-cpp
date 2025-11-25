#include <PhoneBook.hpp>
#include "color.hpp"

static bool	was_used(const std::string &str)
{
    return (str.empty() ? false : true);
}

static std::string	get_input(std::string promt)
{
    std::string input;

    std::cout << GREEN << promt << RESET << std::endl;
    while (input.empty())
        std::getline(std::cin, input);
    return (input);
}

static std::string	format_field(const std::string &s)
{
    if (s.length() > 10)
        return (s.substr(0, 9) + ".");
    std::string res = s;
    if (res.length() < 10)
        res = std::string(10 - res.length(), ' ') + res;
    return (res);
}

void	PhoneBook::add_contact(void)
{
    _contacts[_index].set_first_name(get_input("Enter first name: "));
    _contacts[_index].set_last_name(get_input("Enter last name: "));
    _contacts[_index].set_nickname(get_input("Enter nickname: "));
    _contacts[_index].set_phone_number(get_input("Enter phone number: "));
    _contacts[_index].set_darkest_secret(get_input("Enter darkest secret: "));
    _index = _index == MAX_CONTACTS - 1 ? 0 : _index + 1;
}

void PhoneBook::display_contacts() const
{
    for (uint32_t i = 0; i < MAX_CONTACTS; ++i)
    {
        if (!was_used(_contacts[i].get_first_name()))
            continue;
        std::string idx = std::to_string(i);
        std::cout << YELLOW << format_field(idx) << "|" 
                << format_field(_contacts[i].get_first_name()) << "|" 
                << format_field(_contacts[i].get_last_name()) << "|" 
                << format_field(_contacts[i].get_nickname()) << RESET << std::endl;
    }
}

bool	PhoneBook::print_contact(uint32_t id) const
{
    if (id >= MAX_CONTACTS || !was_used(_contacts[id].get_first_name()))
        return (false);
    std::cout << YELLOW << "First name: " << _contacts[id].get_first_name() << std::endl;
    std::cout << "Last name: " << _contacts[id].get_last_name() << std::endl;
    std::cout << "Nickname: " << _contacts[id].get_nickname() << std::endl;
    std::cout << "Phone number: " << _contacts[id].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << _contacts[id].get_darkest_secret() << RESET << std::endl;
    return (true);
}

void PhoneBook::print_usage(void)
{
    std::cout << GREEN << "ADD: save a new contact" << std::endl;
    std::cout << "SEARCH: display a specific contact" << std::endl;
    std::cout << "EXIT: exit the program" << "\n" << RESET << std::endl;
}
