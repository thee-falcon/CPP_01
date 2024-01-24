/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:46:12 by omakran           #+#    #+#             */
/*   Updated: 2024/01/24 11:47:24 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;

    std::cout << "==> Let's Create a zombie. <==" << std::endl;
    std::cout << ">> Enter the Zombie name: ";
    std::cin >> name;
    Zombie zombie(name);
    zombie.announce();
    return (0);
}