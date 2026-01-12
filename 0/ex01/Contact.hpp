class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		void	setFirstName(const std::string& first_name);
		void	setLastName(const std::string& last_name);
		void	setNickname(const std::string& nickname);
		void	setPhoneNumber(const std::string& phone_number);
		void	setDarkestSecret(const std::string& darkest_secret);
		const std::string&	getFirstName() const;
		const std::string&	getLastName() const;
		const std::string&	getNickname() const;
		const std::string&	getPhoneNumber() const;
		const std::string&	getDarkestSecret() const;

		int	verify_string(const std::string& str);
		int	verify_phone_number(std::string);
};
