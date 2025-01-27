/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:20:36 by ufo               #+#    #+#             */
/*   Updated: 2025/01/21 15:52:31 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie test = Zombie("lox");
    test.announce();
    test.randomChump("chumper");
    Zombie *newTest = test.newZombie("newZomb");
    delete(newTest);
}
