#include "includes.hpp"

// const std::string Humanb::getWeaponName()
// {
// 	return (m_weapon.getType());
// }
void	HumanB::attack()
{
	if (m_weapon)
		std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " attacks with his bare hands like a true warrior" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
}

HumanB::HumanB(const std::string &name) : m_name(name), m_weapon(NULL)
{

}