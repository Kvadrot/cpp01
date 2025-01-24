/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:39:30 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:09:26 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

# include <iostream>
# include <string>


class Weapon {
    private:
        std::string _type;
    
    public:
    
    //Constructors:
        Weapon();
        Weapon(std::string type);
        ~Weapon();

    //Methods:
        const std::string& getType( void );
        void setType( std::string type );
};

#endif
