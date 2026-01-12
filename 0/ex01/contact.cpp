#include "includes.hpp"

void	Contact::setFirstName(const std::string& firstName) {
	this->firstName = firstName;
}

void	Contact::setLastName(const std::string& lastName) {
	this->lastName = lastName;
}

void	Contact::setNickname(const std::string& nickname) {
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string& phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string& darkestSecret) {
	this->darkestSecret = darkestSecret;
}


const std::string&	Contact::getFirstName() const {
	return firstName;
}
const std::string&	Contact::getLastName() const {
	return lastName;
}
const std::string&	Contact::getNickname() const {
	return nickname;
}
const std::string&	Contact::getPhoneNumber() const {
	return phoneNumber;
}
const std::string&	Contact::getDarkestSecret() const {
	return darkestSecret;
}

int	verify_string(const std::string& str, int code)
{
	if (code == 1)
	{
		if (str.length() > 0)
			return (1);
		else {
			std::cout << "field cannot be empty" << std::endl;
			return (0);
		}
	}
	return (1);
}
