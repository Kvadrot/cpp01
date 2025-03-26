/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:28:53 by ufo               #+#    #+#             */
/*   Updated: 2025/03/25 16:48:06 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    Zombie* zArray;
    zArray = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        Zombie newZomb = Zombie(name);
        zArray[i] = newZomb;
    }
    return zArray;
}
