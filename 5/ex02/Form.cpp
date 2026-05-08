#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(0), _minToSign(0), _minToExec(0)
{
	std::cout << "Default instance\n";
}

Form::Form(const std::string name, const int minS, const int minE) : _name(name), _isSigned(0),
	_minToSign(validateValue(minS)), _minToExec(validateValue(minE))
{
	std::cout << "Named instance\n";
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
	if (this->_minToSign >= target.getGrade())
	{
		this->_isSigned = 1;
		std::cout << target.getName() << " signed " << this->getName() << std::endl;
	}
	else {
		std::cerr << target.getName() << " counldn't sign " << this->getName() << " because ";
		throw Form::GradeTooLowException();
	}
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

int	Form::getIsSigned(void) const
{
	return this->_isSigned;
}

std::ostream & operator<<(std::ostream &flux, const Form &src)
{
	flux << src.getName() << ":" << std::endl <<
		"	Form minimun to sign " << src.getMinToSign() << std::endl <<
		"	Form minimum to exec " << src.getMinToExec() << std::endl <<
		"	is the form signed " << (src.getIsSigned() == 1 ? "yes" : "no") << std::endl;
	return flux;
}
