#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iomanip>
# include <iostream>
# include <exception>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat& operator=(const Bureaucrat &rhs);
	virtual ~Bureaucrat();


	std::string	getName(void) const;
	int	getGrade(void) const;

	void		incrementGrade(void);
	void		lowerGrade(void);

	class		GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw() {
				 return "Grade too low";
			}
	};

	class		GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw() {
				return "Grade too high";
			}
	};

private:
	const std::string _name;
	int _grade;
};

std::ostream & operator<<(std::ostream &flux, const Bureaucrat &src);
#endif
