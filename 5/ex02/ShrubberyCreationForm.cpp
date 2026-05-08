#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery", 145, 137), _target(target)
{
 
}

std::string ShrubberyCreationForm::getName(void) const
{
	std::cout << "xd" << std::endl;
	return "yo";
}
