/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:46:12 by omakran           #+#    #+#             */
/*   Updated: 2024/01/24 12:35:49 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    
    std::cout << std::endl;
    std::cout << "==> Let's Create a zombie on the stack. <==" << std::endl;
    std::cout << ">> Enter the Zombie name: " << std::flush;
    std::cin >> name;
    // the system gives the argument "clear" to the console terminal to execute the command.
    system ("clear");
    Zombie zombie(name);
    std::cout << "==> Now Let's Create a zombie on the heap. <==" << std::endl;
    std::cout << ">> Enter the Zombie name: " << std::flush;
    std::cin >> name;
    system ("clear");
    // Allocate a new zombie.
    Zombie  *heap_zombie = newZombie( name );
    heap_zombie->announce();
    // Free the Allocation.
    delete heap_zombie;
    std::cout << ">> randomChump <<" << std::endl;
    randomChump(name);
    return (0);
}