#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <exception>

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _minToSign;
		const int _minToExec;
	public:
		Form();
		Form(const std::string name, const int minS, const int minE);
		Form(const Form &src);
		Form& operator=(const Form &rhs);
		~Form();
};

#endif
