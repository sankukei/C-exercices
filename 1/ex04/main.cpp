#include "includes.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cout << "Patern 1 cannot be empty" << std::endl;
		return 1;
	}
	std::string str;
	std::ifstream fd(av[1]);
	if (!fd.is_open())
	{
		std::cout << "File not found or cannot be opened" << std::endl;
		return 1;
	}

	std::string outfile = av[1];
	outfile += ".replace";
	std::ofstream out(outfile.c_str());

	std::stringstream buff;
	buff << fd.rdbuf();
	std::string file = buff.str();

	if (s1 == s2)
	{
		out << file;
		return (0);
	}
	size_t pos = 0;
	std::string tmp;
	size_t occur = file.find(s1, pos);
	while (occur != std::string::npos)
	{
		tmp += file.substr(pos, occur - pos);
		tmp += s2;
		pos = occur + s1.length();
		occur = file.find(s1, pos);
	}
	tmp += file.substr(pos);
	out << tmp;
	fd.close();
	out.close();
	return 0;
}
