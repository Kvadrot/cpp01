/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:39:13 by ufo               #+#    #+#             */
/*   Updated: 2025/03/26 10:55:57 by itykhono         ###   ########.fr       */
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
