#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(0), _minToSign(0), _minToExec(0)
{
	std::cout << "Default instance\n";
}

Form::Form(const std::string name, const int minS, const int minE) : _name(name), _isSigned(0), _minToSign(minS), _minToExec(minE)
{
	std::cout << "Named instance\n";
}

Form::~Form()
{
	std::cout << "Default destructor\n";
}
