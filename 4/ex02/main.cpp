#include "includes.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
// Ce code NE DOIT PAS compiler
    // Animal test; 
    // Animal* meta = new Animal();

    // Ce code DOIT compiler
    Animal* j = new Dog();
    Animal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;
    delete i;
    
    // delete meta;
    return 0;
}