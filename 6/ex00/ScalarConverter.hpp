#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <cctype>
# include <cstdlib>
# include <climits>

class ScalarConverter
{
	public:
		static void convert(const std::string &input);
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		ScalarConverter& operator=(const ScalarConverter &rhs);
		~ScalarConverter();
};

#endif
