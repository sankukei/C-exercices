class HumanA
{
	private:
		const std::string m_name;
		Weapon &m_weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		const std::string getWeaponName();
		void	attack();
};
