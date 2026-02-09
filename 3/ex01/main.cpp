#include "includes.hpp"

int main()
{
    std::cout << "========== 1. TEST DE CONSTRUCTION ==========" << std::endl;
    {
        ScavTrap scav("SC-42");
        std::cout << std::endl;
        std::cout << "========== 2. TEST DES ACTIONS ==========" << std::endl;
        scav.attack("un vilain Skag");
        scav.beRepaired(20);
        scav.guardGate();
        std::cout << std::endl;
        std::cout << "========== 3. TEST D'ÉNERGIE ==========" << std::endl;
        for (int i = 0; i < 5; i++)
            scav.attack("une cible d'entrainement");
        std::cout << std::endl;
        std::cout << "========== 4. TEST DE MORT ==========" << std::endl;
        scav.takeDamage(150);  
        scav.attack("un fantôme");
        scav.guardGate();
        scav.beRepaired(10);
        std::cout << std::endl;
        std::cout << "========== 5. TEST DE DESTRUCTION ==========" << std::endl;
    }
    return 0;
}