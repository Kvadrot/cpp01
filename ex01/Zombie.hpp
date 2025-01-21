/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:14:34 by ufo               #+#    #+#             */
/*   Updated: 2025/01/21 15:11:13 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>

class Zombie {
    private:
        std::string name;

    public:
        //Consstructors:
        Zombie();
        Zombie(std::string zombieName);
        ~Zombie();
        
        //Methods
        void announce( void );
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

