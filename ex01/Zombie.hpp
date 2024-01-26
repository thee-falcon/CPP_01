/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:58 by omakran           #+#    #+#             */
/*   Updated: 2024/01/26 10:26:36 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class   Zombie
{
    std::string _name;
public:
    Zombie( void );
    ~Zombie();
    void    announce( void );
    void    getName( std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif