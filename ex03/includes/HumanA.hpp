/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:30:27 by dsteiger          #+#    #+#             */
/*   Updated: 2025/09/01 18:56:22 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>

class HumanA
{
    private:
        std::string _name;
    public:
        HumanA();
        ~HumanA();
        void attack();
};

#endif