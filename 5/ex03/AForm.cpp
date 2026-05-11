#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(0), _minToSign(0), _minToExec(0)
{
	std::cout << "Default instance\n";
}

AForm::AForm(const std::string name, const int minS, const int minE) : _name(name), _isSigned(0),
	_minToSign(validateValue(minS)), _minToExec(validateValue(minE))
{
	std::cout << "Named instance\n";
}

AForm::AForm(const AForm &src) : _name(src._name), _isSigned(src._isSigned), _minToSign(src._minToSign), _minToExec(src._minToExec)
{
	std::cout << "Copy constructor called\n";
}

AForm& AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "Default destructor\n";
}

int AForm::validateValue(int val)
{
	if (val < 1)
		throw AForm::GradeTooHighException();
	if (val > 150)
		throw AForm::GradeTooLowException();
	return val;
}

void	AForm::beSigned(const Bureaucrat & target)
{
	if (this->_minToSign >= target.getGrade())
	{
		this->_isSigned = 1;
	}
	else {
		throw AForm::GradeTooLowException();
	}
}

std::string	AForm::getName(void) const
{
	return this->_name;
}

int	AForm::getMinToSign(void) const
{
	return this->_minToSign;
}

int	AForm::getMinToExec(void) const
{
	return this->_minToExec;
}

bool	AForm::getIsSigned(void) const
{
	return this->_isSigned;
}

std::ostream & operator<<(std::ostream &flux, const AForm &src)
{
	flux << src.getName() << ":" << std::endl <<
		"	Form minimum to sign " << src.getMinToSign() << std::endl <<
		"	Form minimum to exec " << src.getMinToExec() << std::endl <<
		"	is the form signed " << (src.getIsSigned() ? "yes" : "no") << std::endl;
	return flux;
}
