#include "includes.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(NULL)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;

}

Dog::~Dog()
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof !!!!!" << std::endl;
}
