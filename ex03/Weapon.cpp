/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:39:13 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:12:16 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructors
Weapon::Weapon() {
    
}
Weapon::Weapon(std::string type) {
    _type = type;
}

Weapon:: ~Weapon() {
        
}

// Meathods:
const std::string&  Weapon::getType( void ) {
    return (this->_type);   
}

void Weapon::setType( std::string newType )
{
    this->_type = newType;
}
