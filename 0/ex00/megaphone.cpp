#include <iostream>
#include <cctype>

int	main(int ac, char *argv[])
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for(int i = 1; i < ac; i++)
	{
		for(int j = 0; argv[i][j]; j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
		if (i < ac - 1)
			std::cout << " ";

	}
	std::cout << std::endl;
	return (0);
}
