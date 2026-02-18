#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iomanip>
# include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal& operator=(const WrongAnimal &rhs);
	virtual ~WrongAnimal();
	
	virtual void	makeSound() const;
	std::string	getType() const;
protected:
	std::string	type;

};

#endif