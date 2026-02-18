#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal test; 
    // Animal* meta = new Animal();

    Animal* j = new Dog();
    Animal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;
    delete i;
    
    // delete meta;
    return 0;
}