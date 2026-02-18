#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy consructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou :3" << std::endl;
}
