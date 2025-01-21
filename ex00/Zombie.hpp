/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:14:34 by ufo               #+#    #+#             */
/*   Updated: 2025/01/21 10:24:25 by ufo              ###   ########.fr       */
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
        Zombie(std::string zombieName);
        ~Zombie();
        
        //Methods
        void announce( void );
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};
