#pragma once
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie() = default;
		void	announce(void);
		void	setName(const std::string &name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
