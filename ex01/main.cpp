/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:53:48 by omakran           #+#    #+#             */
/*   Updated: 2024/01/25 16:57:37 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int         N;
    std::string name;

    std::cout << ">> Please Enter N number Zombie objects to allocate: " << std::flush;
    std::cin >> N;
    std::cout << ">> Please Enter the name: " << std::flush;
    std::cin >> name;
    Zombie  *zombie = zombieHorde(N, name);
    
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    delete []zombie;
    return (0);
}