#include "includes.hpp"

FragTrap::FragTrap() : ClapTrap("Default")
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return *this;
}


void	FragTrap::highFivesGuys()
{
	if (this->_hitPoint <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead and cant high five :(" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << ": give me five !! guys ?" << std::endl;
}
