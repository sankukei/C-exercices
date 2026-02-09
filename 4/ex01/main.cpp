#include "includes.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    // --- PARTIE 1 : Le tableau d'animaux ---
    std::cout << "--- CREATING ANIMALS ARRAY ---" << std::endl;
    const int count = 4;
    Animal* animals[count];

    for (int i = 0; i < count / 2; i++)
        animals[i] = new Dog();
    for (int i = count / 2; i < count; i++)
        animals[i] = new Cat();

    std::cout << "\n--- TESTING DESTRUCTION ---" << std::endl;
    for (int i = 0; i < count; i++)
    {
        delete animals[i]; // Doit appeler Brain destructor + Animal destructor
        std::cout << "---" << std::endl;
    }

    // --- PARTIE 2 : Test de la Deep Copy ---
    std::cout << "\n--- TESTING DEEP COPY ---" << std::endl;
    Dog *medor = new Dog();
    
    std::cout << "Creating a copy of Medor..." << std::endl;
    Dog *copieDeMedor = new Dog(*medor);

    std::cout << "Deleting original Medor..." << std::endl;
    delete medor;

    std::cout << "Checking if the copy still has its brain..." << std::endl;
    // Si c'est une shallow copy, le programme va crash ici ou au delete suivant
    copieDeMedor->makeSound(); 
    
    delete copieDeMedor;

    return 0;
}