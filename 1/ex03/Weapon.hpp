class Weapon
{
	private:
		std::string m_type;
	public:
		Weapon(std::string );
		std::string& getType();
		void setType(std::string);
};
