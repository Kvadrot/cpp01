/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:38:59 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:09:55 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        //Constructors:
        HumanB();
        HumanB( std::string name );
        ~HumanB();
        
        //Methods:
        void attack( void );
        void setWeapon( Weapon *newWeapon);
};
# endif
