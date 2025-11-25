#pragma once

#include <Contact.hpp>
#include <cstdint>

#define MAX_CONTACTS 8

class PhoneBook
{
    private:
        Contact	_contacts[MAX_CONTACTS];
        uint32_t _index = 0;
    public:
        PhoneBook() = default;
        ~PhoneBook() = default;
        void	add_contact(void);
        void	display_contacts() const;
        bool	print_contact(uint32_t id) const;
        void    print_usage(void);
};
