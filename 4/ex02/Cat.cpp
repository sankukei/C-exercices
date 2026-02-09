#include "includes.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src), _brain(NULL)
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
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat()
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou :3" << std::endl;
}
