#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137), _target("default")
{
	std::cout << "Shrubbery default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Shrubbery named constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target)
{
	std::cout << "Shrubbery copy constructor called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw AForm::GradeTooLowException(); // Or a custom "NotSignedException"
	if (executor.getGrade() > this->getMinToExec())
		throw AForm::GradeTooLowException();

	std::ofstream file((_target + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "      /\\      " << std::endl;
		file << "     /\\*\\     " << std::endl;
		file << "    /\\O\\*\\    " << std::endl;
		file << "   /*/\\/\\/\\   " << std::endl;
		file << "  /\\*\\/\\*\\/\\  " << std::endl;
		file << " /\\O\\/\\/*/\\/\\ " << std::endl;
		file << "      ||      " << std::endl;
		file.close();
	}
}
