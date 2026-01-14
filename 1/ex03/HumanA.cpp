#include <includes.hpp>

HumanA::HumanA(const std::string &name, Weapon &weapon) : m_name(name) , m_weapon(weapon)
{
}

const std::string HumanA::getWeaponName()
{
	return (m_weapon.getType());
}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}
