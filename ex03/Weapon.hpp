/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:51:03 by omakran           #+#    #+#             */
/*   Updated: 2024/01/27 18:54:52 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    std::string _type;

public:
    Weapon( std::string type);
    ~Weapon();
    const   std::string &getType( void );
    void                setType( std::string newOne);
};

#endif