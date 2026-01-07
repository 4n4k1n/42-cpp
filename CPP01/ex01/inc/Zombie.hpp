#pragma once
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(const std::string &name);
		~Zombie();
		void	announce(void);
		void	setName(const std::string &name);
};

Zombie*	zombieHorde(int N, std::string name);
