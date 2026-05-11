#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>

int	main(void)
{
	std::srand(std::time(NULL));
	try
	{
		Bureaucrat bob("Bob", 1);
		Bureaucrat jim("Jim", 150);
		
		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Fry");

		std::cout << "\n--- Testing Shrubbery ---" << std::endl;
		jim.signForm(shrub);
		bob.signForm(shrub);
		jim.executeForm(shrub);
		bob.executeForm(shrub);

		std::cout << "\n--- Testing Robotomy ---" << std::endl;
		bob.signForm(robot);
		bob.executeForm(robot);
		bob.executeForm(robot);
		bob.executeForm(robot);

		std::cout << "\n--- Testing Pardon ---" << std::endl;
		bob.signForm(pardon);
		bob.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << "Main catch: " << e.what() << std::endl;
	}

	return (0);
}
