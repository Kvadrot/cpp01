/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:07:58 by ufo               #+#    #+#             */
/*   Updated: 2025/03/26 11:18:50 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
// Constructors:
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name (name) {

}

HumanA::~HumanA() {
    
}

// Methods
void HumanA::attack( void ) {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}



