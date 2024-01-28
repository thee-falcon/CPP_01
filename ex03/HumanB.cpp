/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:50:49 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 15:02:03 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
    
}

void    HumanB::setWeapon( Weapon &weapon)
{
    this->_weapon = &weapon;
}
