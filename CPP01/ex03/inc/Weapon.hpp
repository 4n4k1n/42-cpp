#pragma once
#include <string>

class Weapon
{
	private:
		std::string _type = "Weapon";
	public:
		Weapon() = default;
		Weapon(const std::string &type);
		~Weapon() = default;
		const std::string	&getType(void);
		void				setType(const std::string &type);
};
