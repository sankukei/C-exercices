#include "includes.hpp"

int main()
{
    std::cout << "--- CONSTRUCTION TESTS ---" << std::endl;
    ClapTrap anonymous;
    ClapTrap clap("CLP-42");
    ClapTrap copy(clap);
    ClapTrap assigned;
    assigned = clap;

    std::cout << "\n--- ACTION TESTS (CLP-42) ---" << std::endl;
    for (int i = 0; i < 11; i++) {
        std::cout << "[" << i << "] ";
        clap.attack("un pauvre Skag");
    }

    std::cout << "\n--- DAMAGE & REPAIR TESTS ---" << std::endl;
    ClapTrap target("Target-Bot");
    
    target.beRepaired(5);
    target.takeDamage(5);
    target.takeDamage(20);
    target.attack("quelqu'un");
    target.beRepaired(10);
    target.takeDamage(1);

    std::cout << "\n--- DESTRUCTOR TESTS ---" << std::endl;
    return 0;
}
