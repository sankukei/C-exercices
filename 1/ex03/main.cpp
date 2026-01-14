#include "includes.hpp"
int	main(void)
{
	/*
	Weapon club = Weapon("crude spiked club");
	HumanA bobby("Bobby", club);
	bobby.attack();
	std::cout << club.getType() << std::endl;
	club.setType("sword");
	std::cout << club.getType() << std::endl;
	//HumanA filston("Remi", Weapon("Monster (vide)"));
	*/
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
	return (0);
}

