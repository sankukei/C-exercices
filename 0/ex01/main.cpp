#include "includes.hpp"


int	main(int ac, char *av[])
{
	(void)ac;
	(void)av;
	Contact contact;
	PhoneBook phonebook;

	std::string	str;

	std::cout << "User options:" << std::endl;
	std::cout << "1) [ADD] to add a contact" << std::endl;
	std::cout << "2) [SEARCH] to search contacts" << std::endl;
	std::cout << "3) [EXIT] to exit program" << std::endl;
	while (true)
	{
		if (!getline(std::cin, str))
			break ;
		if (str == "ADD")
			phonebook.addContact();
		else if (str == "SEARCH")
			phonebook.searchContact(str);
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "invalid command, [ADD] [SEARCH] [EXIT]" << std::endl;
	}
	return (0);
}

std::string	format_string(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
	{
		std::string res = str.substr(0, 9) + ".";
		return (res);
	}
	
}

int	validate_string(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	PhoneBook::searchContact(std::string str)
{
	(void)str;

	std::cout << "|" << std::setw(10) << "Index"
		<< "|" << std::setw(10) << "First Name"
		<< "|" << std::setw(10) << "Last Name"
		<< "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < contact_number; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << format_string(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << format_string(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << format_string(contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}
	std::cout << std::endl << "Enter index to display more info :" << std::endl;
	std::string	user_index;
	if (!getline(std::cin, user_index))
		return (0);
	int	index = atoi(user_index.c_str());
	if (!validate_string(user_index))
		std::cout << "only positive integers between 0 - 7" << std::endl;
	else if (index < 0 || index > 7)
		std::cout << "index out of range" << std::endl;
	else
	{
		std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
	index++;
	return (1);
}

PhoneBook::PhoneBook()
{
	contact_number = 0;
}

void	PhoneBook::addContact()
{
	size_t	index = currentIndex % 8;
	std::string	str;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, str);
	contacts[index].setFirstName(str);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, str);
	contacts[index].setLastName(str);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, str);
	contacts[index].setNickname(str);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, str);
	contacts[index].setPhoneNumber(str);
	std::cout << "Enter your darkest secret" << std::endl;
	std::getline(std::cin, str);
	contacts[index].setDarkestSecret(str);

	currentIndex++;
	if (contact_number < 8)
		contact_number++;
	std::cout << contact_number << std::endl;
	
}
