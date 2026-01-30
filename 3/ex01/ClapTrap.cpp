#include "includes.hpp"


ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Named constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoint <= 0)
	{
		std::cout << this->_name << " is missing energy point" << std::endl;
		return ;
	} else if (this->_hitPoint <= 0) {
		std::cout << this->_name << " is missing hit point" << std::endl;
		return ;
	} else {
		this->_energyPoint -= 1;
		std::cout << this->_name << " attacks " << target << " dealing " << this->_attackDamage << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " is already dead, why ?" << std::endl;
		return ;
	}
	if (amount >= (unsigned int)this->_hitPoint)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	std::cout << this->_name << " receives " << amount << " damage. Health remaining: " << this->_hitPoint << std::endl;
	if (this->_hitPoint == 0)
		std::cout << this->_name << " had died in insuferable pain, what a monster..." << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint == 0)
	{
		std::cout << "no energy point available" << std::endl;
		return;
	}
	
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " is dead and cannot repair itself" << std::endl;
		return;
	}
	this->_energyPoint -= 1;
	this->_hitPoint += amount;
	std::cout << this->_name << " has repaired itself " << amount << "health. Total: " << this->_hitPoint << std::endl;
}
