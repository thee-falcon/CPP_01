/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:54:04 by omakran           #+#    #+#             */
/*   Updated: 2024/01/26 10:26:07 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    // Allocate memory for N Zombie objects.
    Zombie  *horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        horde[i].getName(name);
    return(horde);     
}