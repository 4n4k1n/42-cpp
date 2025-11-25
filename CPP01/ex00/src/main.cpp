#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie = newZombie("Lisa");
	zombie->announce();
	delete zombie;
	
	randomChump("Tom");
	return (0);
}