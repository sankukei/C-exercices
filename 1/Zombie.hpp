class Zombie
{
	private:
		std::string name;
	public:
		Zombie(const std::string name);
		void	announce(void);
		void	set_name(const std::string& name);
		const	std::string&	get_name() const;
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
};
