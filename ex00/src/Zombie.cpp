/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:02:25 by dsteiger          #+#    #+#             */
/*   Updated: 2025/08/27 14:26:13 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{

}

Zombie::~Zombie(void)
{

}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}