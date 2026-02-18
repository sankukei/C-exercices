#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain &src);
    Brain& operator=(const Brain &rhs);
    ~Brain();

private:
    std::string ideas[100];
};

#endif