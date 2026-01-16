#include "includes.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return 0;
	std::string str;
	std::ifstream fd(av[1]);

	
	// std::string outfile = av[1];
	// std::string yo = outfile.append(".replace");
	// std::ofstream o(yo);
	std::cout << av[1] << std::endl;
	while (std::getline(fd, str))
		std::cout << str << std::endl;
	(void)av;
	return 0;
}
