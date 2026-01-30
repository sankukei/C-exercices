#include "includes.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "Scavtrap " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoint <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is missing energy point" << std::endl;
		return ;
	} else if (this->_hitPoint <= 0) {
		std::cout << "ScavTrap " << this->_name << " is missing hit point" << std::endl;
		return ;
	} else {
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " dealing " << this->_attackDamage << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (this->_hitPoint <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cant use gate keeper mode :(" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " has entered gater keeper mode" << std::endl;
}
