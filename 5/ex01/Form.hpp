#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
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

		int	validateValue(int val);
		void	beSigned(const Bureaucrat & target);

		std::string	getName(void) const;
		int		getMinToSign(void) const;
		int		getMinToExec(void) const;
		bool	getIsSigned(void) const;

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low";
				}
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high";
				}
		};
};

std::ostream & operator<<(std::ostream &flux, const Form &src);
#endif
