/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:32:02 by omakran           #+#    #+#             */
/*   Updated: 2024/01/29 16:40:33 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class   Harl
{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    
    public:
    Harl();
    ~Harl();
    void complain( std::string level );
};

#endif