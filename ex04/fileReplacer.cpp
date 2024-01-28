/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:57:19 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 18:35:55 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReplacer.hpp"

FileReplacer::FileReplacer( std::string &Filename, std::string &s1, std::string &s2) : _FileName(Filename), _s1(s1), _s2(s2)
{
    
}

FileReplacer::~FileReplacer()
{}

void    FileReplacer::replaceAndSave( void )
{
    std::ifstream   inputFile(_FileName);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Unable to open input file!." << std::endl;
        return ;
    }    
}