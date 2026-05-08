#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
};

#endif
