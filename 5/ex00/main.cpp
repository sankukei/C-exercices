#include "Bureaucrat.hpp"

int	main(void)
{
	//test increment / lower
	Bureaucrat test("Thomas the tank", 1);
	// overload
	std::cout << test << std::endl;
	try {
		test.incrementGrade();
	} catch (std::exception & e) { std::cerr << e.what() << std::endl; };
	Bureaucrat test2("Thomas the tank2", 150);
	try {
		test.lowerGrade();
	} catch (std::exception & e) { std::cerr << e.what() << std::endl; };

	//test d'instanciation foireuse
	try {
		Bureaucrat a("Bob", -1);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat a("Bob", 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
