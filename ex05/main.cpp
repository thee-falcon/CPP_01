/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:32:04 by omakran           #+#    #+#             */
/*   Updated: 2024/01/30 16:35:52 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl        harl;
    std::string input;

    do
    {
        std::cout << "=> Please Enter a Level, (Or type \"exit\" to quit): ";
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit") != 0);
    
    return (0);
}