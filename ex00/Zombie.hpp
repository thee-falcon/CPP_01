/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:46:26 by omakran           #+#    #+#             */
/*   Updated: 2024/01/24 11:21:38 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    std::string name;
    
public:
    Zombie( std::string name );
    ~Zombie();
    void    announce( void );
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );
};

#endif