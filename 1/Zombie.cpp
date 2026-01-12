#include <includes.hpp>

void	Zombie::announce()
{
	std::string str = get_name();
	std::cout <<  str << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string& name)
{
	this->name = name;
}

const	std::string&	Zombie::get_name() const {
	return name;
}

Zombie::Zombie(std::string nameGiven) {
	name = nameGiven;
}

Zombie*	newZombie(std::string name)
{
	Zombie *freshCreated = new Zombie(name);
	return (freshCreated);
}

void	randomChump(std::string name)
{
	Zombie	freshCreatedRandom(name);
	freshCreatedRandom.announce();
}
