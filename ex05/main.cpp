/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:57:52 by ufo               #+#    #+#             */
/*   Updated: 2025/01/22 18:57:05 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	std::cout << std::endl << "------ DEBUG Level ------" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "------ INFO Level ------" << std::endl;;
	harl.complain("INFO");
	std::cout << std::endl << "------ WARNING Level ------" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "------ ERROR Level ------" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "------ No valid Level ------" << std::endl;
	harl.complain("ALARM");
	return (0);
}
