/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:13:14 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 17:48:03 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl( void )
{
	std::cout << C_CYAN "Harl object destroyed." C_RESET << std::endl;
}

int Harl::getLevelIndex( const std::string& level ) const
{
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

void	Harl::complain( std::string level )
{
	int startIndex = getLevelIndex(level);

	if (startIndex == -1)
	{
		std::cout << C_RED "[ Probably complaining about insignificant problems ]" C_RESET << std::endl;
		exit(1);
	}

	int currentIndex = startIndex;
	while (currentIndex < 4)
	{
		std::cout << C_CYAN "[ " << levels[currentIndex] << " ]" C_RESET << std::endl;
		(this->*functions[currentIndex])();
		std::cout << std::endl;
		currentIndex++;
	}
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
