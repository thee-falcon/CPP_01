/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:50:39 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 14:54:00 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    
}
HumanA::~HumanA()
{
    
}

void    HumanA::attack() const
{
    if (this->_weapon.getType() != "")
        std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    else
        std::cout << this->_name << " No Weapon to attack!" << std::endl;
}
