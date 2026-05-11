#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &input)
{
	int	end = input.length() - 1;
	if (input.length() == 1 && !std::isdigit(input[0]))
	{
		std::cout << "char\n";
		//char
	} else {
		if (input[end] == 'f')
		{
			return 0;
		}
	}
}

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &src) { (void)src; }
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &rhs) { (void)&rhs; return *this; }
ScalarConverter::~ScalarConverter() {}
