/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:20:36 by ufo               #+#    #+#             */
/*   Updated: 2025/03/26 10:51:50 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie test = Zombie("lox");
    test.announce();
    test.randomChump("chumper");
    Zombie *newTest = test.newZombie("newZomb");
	newTest = NULL;
}
