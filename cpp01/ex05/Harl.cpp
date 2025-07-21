/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:13:14 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 17:16:10 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	functionMap["DEBUG"] = &Harl::debug;
	functionMap["INFO"] = &Harl::info;
	functionMap["WARNING"] = &Harl::warning;
	functionMap["ERROR"] = &Harl::error;
}

Harl::~Harl( void )
{
	std::cout << C_CYAN "Harl object destroyed." C_RESET << std::endl;
}

void	Harl::complain( std::string &level )
{
	if (functionMap.find(level) != functionMap.end())
		(this->*functionMap[level])();
	else
		std::cout << C_YELLOW "Invalid level." C_RESET << std::endl;
}

void	Harl::debug( void )
{
	std::cout << C_GREEN "Debug: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." C_RESET << std::endl;
}

void	Harl::info( void )
{
	std::cout << C_BLUE "Info: I cannot believe adding extra bacon costs more money." C_RESET << std::endl;
}

void	Harl::warning( void )
{
	std::cout << C_YELLOW "Warning: I think I deserve to have some extra bacon for free." C_RESET << std::endl;
}

void	Harl::error( void )
{
	std::cout << C_RED "Error: This is unacceptable! I want to speak to the manager now." C_RESET << std::endl;
}
