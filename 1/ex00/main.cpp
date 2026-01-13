#include <includes.hpp>

int	main(void)
{
	Zombie *z;
	z = newZombie("bob");
	z->announce();
	randomChump("yo");
	randomChump("les");
	randomChump("amis");
	delete(z);
	return (0);
}
