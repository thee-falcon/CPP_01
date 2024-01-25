/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:56 by omakran           #+#    #+#             */
/*   Updated: 2024/01/25 16:53:38 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << "The zombie: " << this->_name << " Has been destroyed." << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}