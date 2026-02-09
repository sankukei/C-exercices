#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "includes.hpp"

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