/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:49:12 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 17:56:59 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
// Constructors:
HumanB::HumanB() {
    this->_name = "";
    this->_weapon = NULL;
}

HumanB::HumanB(std::string name) {
    this->_name = name;
}

HumanB::~HumanB()
{
    
}

// Methods
void HumanB::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *newWeapon)
{
    _weapon = newWeapon;    
}
