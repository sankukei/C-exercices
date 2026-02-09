#include "includes.hpp"
#include "Brain.hpp"
#include <iostream>

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