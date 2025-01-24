/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:08:39 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:09:15 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
#define HUMAN_H

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon& _weapon;
        std::string _name;

    public:
        //Constructors:
        HumanA( std::string name, Weapon& weapon );
        ~HumanA();
        
        //Methods:
        void attack( void );
};

#endif
