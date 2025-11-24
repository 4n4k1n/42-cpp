#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include "color.hpp"

int	main(void)
{
    PhoneBook           phonebook;
    std::string         cmd;
    uint32_t            id;
    std::string         index;
    std::stringstream   ss;

    phonebook.print_usage();
    while (true)
    {
        std::cout << MAGENTA << "Enter action: " << RESET << std::endl;
        if (!std::getline(std::cin, cmd))
            return (0);
        if (cmd == "ADD")
            phonebook.add_contact();
        else if (cmd == "SEARCH")
        {
            phonebook.display_contacts();
            std::cout << MAGENTA << "Enter index: " << RESET << std::endl;
            if (!std::getline(std::cin, index))
                return (0);
            ss = std::stringstream(index);
            if (!(ss >> id) || !phonebook.print_contact(id))
                std::cout << RED << "Invalid index" << RESET << std::endl;
        }
        else if (cmd == "EXIT")
            return (0);
    }
    return (0);
}
