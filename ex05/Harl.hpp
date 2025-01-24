/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:26:29 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:59:25 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_H
#define HARL_H

# include <iostream>
# include <string>


class   Harl {
    private:
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );

    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};

#endif
