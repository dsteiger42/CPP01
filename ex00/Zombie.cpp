#include "zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{

}

Zombie::~Zombie(void)
{

}

void announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}