#include "Form.hpp"

int	main(void)
{
	try {
		Bureaucrat bob("Bob", 100);
		Bureaucrat boss("Boss", 1);
		Form a("Formulaire de fou", 50, 50);

		std::cout << bob << std::endl;
		std::cout << boss << std::endl;
		std::cout << a << std::endl;

		bob.signForm(a);
		boss.signForm(a);
		
		std::cout << a << std::endl;
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
