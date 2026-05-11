#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	std::cout << "Intern assignment operator called" << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm *Intern::makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
	std::string names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* (Intern::*methods[3])(std::string) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePardon
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == names[i])
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return (this->*methods[i])(target);
		}
	}

	std::cout << "Error: Form name '" << formName << "' unknown." << std::endl;
	return NULL;
}
