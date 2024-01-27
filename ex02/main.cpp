/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:11:35 by omakran           #+#    #+#             */
/*   Updated: 2024/01/27 16:46:25 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string     brain = "HI THIS IS BRAIN";
    std::string     *brainPTR = &brain;
    std::string     &brainREF = brain;

    std::cout << "------------------- Memory Address ------------------- " << std::endl;
    std::cout << "The memory address of the string variable: " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR: " << brainPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &brainREF << std::endl;
    std::cout << "------------------- Values ------------------- " << std::endl;
    std::cout << "The value of the string variable: " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *brainPTR << std::endl;
    std::cout << " The value pointed to by stringREF: " << brainREF << std::endl;
    // this line of code is the same thing.
    // std::cout << "The value pointed to by stringREF: " << *(&brainREF) << std::endl;
    // but You don't should to do it, because Reference is like a dereferenced pointer. So you don't need to add any symbol to access it.
    return (0);
}