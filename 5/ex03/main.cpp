#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* scf;
	AForm* ppf;
	AForm* unknown;

	std::cout << "\n--- Testing Intern ---" << std::endl;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		delete rrf;
	}

	scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	if (scf)
	{
		std::cout << *scf << std::endl;
		delete scf;
	}

	ppf = someRandomIntern.makeForm("presidential pardon", "Fry");
	if (ppf)
	{
		std::cout << *ppf << std::endl;
		delete ppf;
	}

	unknown = someRandomIntern.makeForm("unknown form", "Target");
	if (unknown)
	{
		delete unknown;
	}

	std::cout << "\n--- Testing with Bureaucrat ---" << std::endl;
	Bureaucrat boss("Boss", 1);
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	return (0);
}
