/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:50:59 by omakran           #+#    #+#             */
/*   Updated: 2024/01/26 11:37:32 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

Weapon::~Weapon()
{
    
}

const std::string&   Weapon::getType()
{
    return (this->_type);
}

void    Weapon::setType(std::string newOne)
{
    this->_type = newOne;
}