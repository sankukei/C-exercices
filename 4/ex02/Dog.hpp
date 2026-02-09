#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &src);
    Dog& operator=(const Dog &rhs);
    virtual ~Dog();
    virtual void makeSound() const;
private:
    Brain* _brain;
};

#endif
