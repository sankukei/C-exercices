#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main(void)
{
	std::srand(std::time(NULL));
	Base* test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
}

Base*	generate(void)
{
	int	r = rand() % 3;
	if (r == 0)
	{
		std::cout << "class A returned\n";
		return new A();
	} else if (r == 1)
	{
		std::cout << "class B returned\n";
		return new B();
	}
	else {
		std::cout << "class C returned\n";
		return new C();
	}
}

void	identify(Base* p)
{
	if (!p)
		std::cout << "null ptr\n";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "identified A class via pointer!\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "identified B class via pointer!\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "identified C class via pointer!\n";
}

void	identify(Base& p)
{
	try {
		A& ref = dynamic_cast<A&>(p);
		std::cout << "identified A class via reference!\n";
		(void)ref;
		return ;
	}
	catch (const std::exception& e)
	{}
	try {
		B& ref = dynamic_cast<B&>(p);
		std::cout << "identified B class via reference!\n";
		(void)ref;
		return ;
	}
	catch (const std::exception& e)
	{}
	try {
		C& ref = dynamic_cast<C&>(p);
		std::cout << "identified C class via reference!\n";
		(void)ref;
		return ;
	}
	catch (const std::exception& e)
	{}
}
