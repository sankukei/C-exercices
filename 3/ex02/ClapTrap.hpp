class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap& operator=(const ClapTrap &aff);
	virtual ~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amout);
protected:
	std::string	_name;
	int		_hitPoint;
	int		_energyPoint;
	int		_attackDamage;
};
