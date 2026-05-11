#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iomanip>
# include <iostream>
# include <exception>

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _minToSign;
		const int _minToExec;
	public:
		AForm();
		AForm(const std::string name, const int minS, const int minE);
		AForm(const AForm &src);
		AForm& operator=(const AForm &rhs);
		virtual ~AForm();

		int		validateValue(int val);
		void		beSigned(const Bureaucrat & target);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		virtual	std::string	getName(void) const;
		int		getMinToSign(void) const;
		int		getMinToExec(void) const;
		bool		getIsSigned(void) const;


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

std::ostream & operator<<(std::ostream &flux, const AForm &src);
#endif
