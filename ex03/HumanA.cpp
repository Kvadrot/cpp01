/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:07:58 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:14:15 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
// Constructors:
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name (name)
{
    this->_name = name;
    this->_weapon = weapon;
}

HumanA::~HumanA()
{
    
}

// Methods
void HumanA::attack( void )
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}



