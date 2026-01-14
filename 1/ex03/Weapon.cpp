#include "includes.hpp"

Weapon::Weapon(std::string str)
{
	this->m_type = str;
}

void	Weapon::setType(std::string type)
{
	this->m_type = type;
}

std::string&	Weapon::getType()
{
	return (this->m_type);
}
