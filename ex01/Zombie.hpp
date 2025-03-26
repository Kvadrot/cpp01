/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:14:34 by ufo               #+#    #+#             */
/*   Updated: 2025/03/25 16:47:37 by itykhono         ###   ########.fr       */
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

Zombie* zombieHorde( int n, std::string name );

