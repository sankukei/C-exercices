class PhoneBook
{
	private:
		Contact contacts[8];
		int	currentIndex;
	public:
		PhoneBook();
		void	addContact();
		int	searchContact(std::string str);
		int	contact_number;
};
