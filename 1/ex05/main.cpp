#include "includes.hpp"

int	main(void)
{
	Harl obj;

	obj.complain("WARNING");
	obj.complain("DEBUG");
	obj.complain("INFO");
	obj.complain("ERROR");

	return (0);
}
