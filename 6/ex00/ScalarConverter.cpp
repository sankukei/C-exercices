#include "ScalarConverter.hpp"

int	checkForSpecialcases(std::string str)
{
	if (str == "inf" || str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff"
			|| str == "nan" || str == "nanf")
		return 1;
	else
		return 0;
}

void ScalarConverter::convert(const std::string &input)
{
	if (input.length() == 1 && !isdigit(input[0]))
	{
		char c = input[0];
		std::cout << "char: '" << c << "'\n";
		std::cout << "int: " << static_cast<int>(c) << "\n";
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << static_cast<float>(c) << "f\n";
		std::cout << "double: " << static_cast<double>(c) << std::endl;
		return;
	}

	if (checkForSpecialcases(input))
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		if (input == "nan" || input == "nanf") {
			std::cout << "float: nanf\ndouble: nan\n";
		} else if (input == "-inf" || input == "-inff") {
			std::cout << "float: -inff\ndouble: -inf\n";
		} else {
			std::cout << "float: inff\n;double: inf\n";
		}
		return;
	}

	char *end;
	double res = strtod(input.c_str(), &end);

	if (*end != '\0' && !(*end == 'f' && *(end + 1) == '\0'))
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		return ;
	}

	std::cout << "char: ";
	if (res < 0 || res > 127 || res != res)
		std::cout << "impossible\n";
	else if (!isprint(static_cast<int>(res)))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(res) << "'\n";

	std::cout << "int: ";
	if (res > INT_MAX || res < INT_MIN || res != res)
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(res) << "\n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(res) << "f\n";
	std::cout << "double: " << res << std::endl;
}


ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &src) { (void)src; }
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &rhs) { (void)&rhs; return *this; }
ScalarConverter::~ScalarConverter() {}
