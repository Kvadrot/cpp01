/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:14:32 by ufo               #+#    #+#             */
/*   Updated: 2025/01/21 14:39:24 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTORS
Zombie::Zombie() {
}

Zombie::Zombie( std::string zombieName ) {
    this->name = zombieName;
}

Zombie:: ~Zombie() {
    std::cout << this->name << " is deconstructed\n";
}

//METHODS
void Zombie:: announce( void ) {
    std::string text = ":BraiiiiiiinnnzzzZ...";
    std::cout << this->name << text << std::endl;
}

 Zombie* Zombie:: newZombie( std::string name ) {
    return ( new Zombie(name) );
 }

 void Zombie:: randomChump( std::string name ) {
    Zombie newCreated = Zombie(name);
    newCreated.announce();
 }
