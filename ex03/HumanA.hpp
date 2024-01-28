/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:50:46 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 14:58:01 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    std::string _name;
    Weapon      &_weapon;

public:
    HumanA( std::string name, Weapon &weapon );
    ~HumanA();
    void    attack() const;
};