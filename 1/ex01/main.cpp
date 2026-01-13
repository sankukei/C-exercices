#include <includes.hpp>

int	main(void)
{
	Zombie *zombieHordeObj;
	zombieHordeObj = zombieHorde(4, "Bryan");
	delete[] zombieHordeObj;
	return (0);
}
