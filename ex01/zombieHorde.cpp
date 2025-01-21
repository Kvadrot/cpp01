/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:28:53 by ufo               #+#    #+#             */
/*   Updated: 2025/01/21 15:10:50 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zArray;
    zArray = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        Zombie newZomb = Zombie(name);
        zArray[i] = newZomb;
    }
    return zArray;
}
