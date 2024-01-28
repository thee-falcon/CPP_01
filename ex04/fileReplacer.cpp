/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:57:19 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 19:24:44 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReplacer.hpp"

FileReplacer::FileReplacer( std::string &Filename, std::string &s1, std::string &s2) : _FileName(Filename), _s1(s1), _s2(s2)
{
    
}

FileReplacer::~FileReplacer()
{}

void    FileReplacer::replaceString(std::string &str)
{
    size_t  found = 0;
    while ((found = str.find(_s1, found)) != std::string::npos)
    {
        str.replace(found, _s1.length(), _s2);
        found += _s2.length();
    }
}
void    FileReplacer::replaceAndSave( void )
{
    std::ifstream   inputFile(_FileName);
    if (!inputFile.is_open())
    {
        std::cerr << "❌ Error: Unable to open input file!." << std::endl;
        return ;
    }
    std::ofstream   outputFile(_FileName + ".replace");
    if (!outputFile.is_open())
    {
        std::cerr << "❌ Error: Unable to creat or open output file!." << std::endl;
        return ;
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        replaceString(line);
        outputFile << line << '\n';
    }
    std::cout << " ✅ Replacement complete, Result saved in " << _FileName + ".replace" << std::endl;
    inputFile.close();
    outputFile.close();
}