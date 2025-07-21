/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:50:19 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 14:23:05 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " has been created." << std::endl;
}

Zombie::Zombie(void) : _name("Unnamed Zombie")
{
	std::cout << "Unnamed Zombie has been created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " has been destroyed." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( const std::string &name )
{
	_name = name;
}
