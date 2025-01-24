/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:21:44 by ufo               #+#    #+#             */
/*   Updated: 2025/01/24 10:41:29 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    
}

Harl::~Harl()
{
    
}

void Harl:: _debug( void ) {
    std::cout << "debug\n";
}

void Harl:: _info( void ) {
    std::cout << "info\n";
}

void Harl:: _warning( void ) {
    std::cout << "warning\n";
}
void Harl:: _error( void ) {
    std::cout << "error\n";
}

void Harl:: complain( std::string level ) {
    std::string levelNamesArr[4] = { "DEBUG", "INFO", "WARING", "ERROR" };
    void (Harl::*funcPtr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    
    for (int i = 0; i < 4; i++) {
        if (level == levelNamesArr[i]) {
            (this->*funcPtr[i])();
            return ;
        }
    }
    std::cout << "level case error: no such level in list\n";
}
