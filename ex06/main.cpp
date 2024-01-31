/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:07:06 by omakran           #+#    #+#             */
/*   Updated: 2024/01/31 16:12:35 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char __unused **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << "<log_level>" << std::endl;
        return (1);
    }
    std::string arg = argv[1];
    Harl        harl;
    harl.complain(arg);

    return (0);
}