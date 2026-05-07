#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor instantiated\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat copy constructor called\n";
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

std::ostream & operator<<(std::ostream &flux, const Bureaucrat &src)
{
	flux << src.getName() << " Bureaucrat grade " << src.getGrade();
	return flux;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::lowerGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}
