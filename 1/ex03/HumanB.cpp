#include "includes.hpp"

// const std::string Humanb::getWeaponName()
// {
// 	return (m_weapon.getType());
// }
void	HumanB::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = weapon.getType();
}

HumanB::HumanB(const std::string &name) : m_name(name)
{

}