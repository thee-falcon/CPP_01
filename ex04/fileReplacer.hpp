/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:45:25 by omakran           #+#    #+#             */
/*   Updated: 2024/01/28 18:48:42 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <iostream>
# include <string>
# include <fstream>

class   FileReplacer
{
    std::string _FileName;
    std::string _s1;
    std::string _s2;
    void replaceString(std::string &str);
    
    public:
    FileReplacer (std::string &FileName, std::string &s1, std::string &s2);
    ~FileReplacer ();
    void    replaceAndSave( void );
};

#endif