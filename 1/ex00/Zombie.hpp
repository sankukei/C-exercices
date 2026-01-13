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

Zombie *Zombiehorde(int n, std::string name);
Zombie *newZombie(std::string name);
void	randomChump(std::string name);
