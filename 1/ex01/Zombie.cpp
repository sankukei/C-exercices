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

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed."<< std::endl;
}

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *fils = new Zombie[n];
	for (int i = 0; i < n; i++) {

		fils[i].nameZombie(name);
		fils[i].announce();
	}
	return fils;
}
