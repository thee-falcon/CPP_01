/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:46:12 by omakran           #+#    #+#             */
/*   Updated: 2024/01/24 11:51:31 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;

    std::cout << "==> Let's Create a zombie on the stack. <==" << std::endl;
    std::cout << ">> Enter the Zombie name: " << std::flush;
    std::cin >> name;
    Zombie zombie(name);
    std::cout << "==> Now Let's Create a zombie on the heap. <==" << std::endl;
    std::cout << ">> Enter the Zombie name: " << std::flush;
    std::cin >> name;
    
    return (0);
}