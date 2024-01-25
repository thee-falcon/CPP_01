/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:58 by omakran           #+#    #+#             */
/*   Updated: 2024/01/25 16:45:02 by omakran          ###   ########.fr       */
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
    Zombie( std::string name = "");
    ~Zombie();
    void    announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif