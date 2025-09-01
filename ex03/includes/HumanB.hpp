/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:30:30 by dsteiger          #+#    #+#             */
/*   Updated: 2025/09/01 18:56:41 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>

class HumanB
{
    private:
        std::string _name;
    public:
        HumanB();
        ~HumanB();
        void attack();
};

#endif