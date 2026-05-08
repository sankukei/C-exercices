#include "Form.hpp"

int	main(void)
{

	Form test("Dragonic for dummys", 1, 23);
	std::cout << test << std::endl;
	try {
		Form a("Formulaire de fou", 50, 50);
		Bureaucrat b("bob", 100);
		a.beSigned(b);
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
