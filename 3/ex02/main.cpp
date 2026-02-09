#include "includes.hpp"

int main()
{
    std::cout << "--- CREATING FRAGTRAP ---" << std::endl;
    FragTrap frag("Fraggy");
    std::cout << "\n--- TESTING ATTACK (Uses ClapTrap's function but Frag's stats) ---" << std::endl;
    frag.attack("un ennemi");
    std::cout << "\n--- SPECIAL ---" << std::endl;
    frag.highFivesGuys();
    std::cout << "\n--- DESTRUCTION ---" << std::endl;
    return 0;
}
