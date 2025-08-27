/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:02:12 by dsteiger          #+#    #+#             */
/*   Updated: 2025/08/27 14:30:12 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Zombie.hpp"

int main(void)
{
    Zombie *zombie1 = newZombie("Shane");



    delete zombie1;
}