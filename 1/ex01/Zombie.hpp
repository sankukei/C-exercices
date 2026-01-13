class Zombie
{
	private:
		std::string name;
	public:
		void nameZombie(std::string name);
		void	announce(void);
		std::string getName(void);
		~Zombie();
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int n, std::string name);
void	randomChump(std::string name);
