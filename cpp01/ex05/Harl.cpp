/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:58:45 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/27 12:52:30 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//const & dest

Harl::Harl( void )
{
	function_map["DEBUG"] = &Harl::debug;
	function_map["INFO"] = &Harl::info;
	function_map["WARNING"] = &Harl::warning;
	function_map["ERROR"] = &Harl::error;
	std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl( void )
{
	std::cout << "Harl destructor called" << std::endl;
}

//private member functions

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

//public function

void	Harl::complain( std::string level )
{
	if (function_map.find(level) != function_map.end())
		(this->*function_map[level])();
	else
		std::cout << "Invalid level" << std::endl;
}
