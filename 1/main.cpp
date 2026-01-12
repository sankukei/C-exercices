#include <includes.hpp>

int	main(void)
{
	Zombie zombie1("John");
	Zombie zombie2("Johny");
	Zombie zombie3("Bobby");
	Zombie zombie4("Fdp");
	zombie1.announce();
	zombie2.announce();
	zombie3.announce();
	zombie4.announce();
	Zombie zombie5("ajaj");
	zombie5.randomChump("yoyooooo");

	return (0);
}
