#include "includes.hpp"
int	main(void)
{
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	// std::cout << "yo" << std::endl;
	// club.setType("some other type of club");
	jim.attack();
}
	return (0);
}

