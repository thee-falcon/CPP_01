/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:31:56 by omakran           #+#    #+#             */
/*   Updated: 2024/01/30 16:41:07 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{

}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain ( std::string level)
{
    // void return type of the memeber function pointed to by the array.
    // I declared a pointer to a member function of the Harl Class
    // define an array of member functions pointers
    // () The empty parameter list, indicating that the member functions pointed by the array take No Parameters.
    void    (Harl::*complaintFunctions[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    // Find the index based on the complaint level
    int index = -1;
    if (level == "DEBUG")
        index = 0;
    else if (level == "INFO")
        index = 1;
    else if (level == "WARNING")
        index = 2;
    else if (level == "ERROR")
        index = 3;
    // Checking the index id valid or not
    if (index >= 0 && index < static_cast<int>(sizeof(complaintFunctions) / sizeof(complaintFunctions[0])))
    {
        // Call the corresponding member function using the array of member funcrtion pointers
        (this->*complaintFunctions[index])();
    }
    else
        std::cout << "Invalid Comlaint level: " << level << std::endl;
}
