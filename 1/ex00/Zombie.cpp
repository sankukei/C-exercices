#include <includes.hpp>

void	Zombie::announce()
{
	std::cout <<  getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::nameZombie(std::string str)
{
	this->name = str;
}

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie1 = new Zombie();
	zombie1->nameZombie(name);
	return (zombie1);
}

void	randomChump(std::string name)
{
	Zombie n;
	n.nameZombie(name);
	n.announce();
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed."<< std::endl;
}
