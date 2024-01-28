/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:44:51 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 19:30:29 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReplacer.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "❗ Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return (1);
    }
    else
    {
        std::string FileName = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        FileReplacer(FileName, s1, s2);
        FileReplacer fileReplacer(FileName, s1, s2);
        fileReplacer.replaceAndSave();
    }
    
    return (0);
}