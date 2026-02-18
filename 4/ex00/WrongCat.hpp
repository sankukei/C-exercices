#ifndef CAT_HPP
# define CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat& operator=(const WrongCat &rhs);
	virtual ~WrongCat();
	virtual void makeSound() const;
};

#endif
