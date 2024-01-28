/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:50:52 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 14:58:05 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    std::string _name;
    Weapon      *_weapon;
    
public:
    HumanB( std::string name );
    ~HumanB();
    void    attack( void ) const;
    void    setWeapon( Weapon &weapon);
};