#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _minToSign(150), _minToExec(150)
{
	std::cout << "Default instance\n";
}

Form::Form(const std::string name, const int minS, const int minE) : _name(name), _isSigned(false),
	_minToSign(validateValue(minS)), _minToExec(validateValue(minE))
{
	std::cout << "Named instance\n";
}

Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned),
	_minToSign(src._minToSign), _minToExec(src._minToExec)
{
	std::cout << "Copy instance\n";
}

Form& Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Default destructor\n";
}

int Form::validateValue(int val)
{
	if (val < 1)
		throw Form::GradeTooHighException();
	if (val > 150)
		throw Form::GradeTooLowException();
	return val;
}

void	Form::beSigned(const Bureaucrat & target)
{
	if (target.getGrade() > this->_minToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

int	Form::getMinToSign(void) const
{
	return this->_minToSign;
}

int	Form::getMinToExec(void) const
{
	return this->_minToExec;
}

bool	Form::getIsSigned(void) const
{
	return this->_isSigned;
}

std::ostream & operator<<(std::ostream &flux, const Form &src)
{
	flux << src.getName() << ":" << std::endl <<
		"	Form minimum to sign " << src.getMinToSign() << std::endl <<
		"	Form minimum to exec " << src.getMinToExec() << std::endl <<
		"	is the form signed " << (src.getIsSigned() ? "yes" : "no") << std::endl;
	return flux;
}
