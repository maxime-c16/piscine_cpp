/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:02:10 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:26:53 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << "Weapon of type '" << C_MAGENTA << _type << C_RESET << "' has been created." << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon of type '" << C_MAGENTA << _type << C_RESET << "' has been destroyed." << std::endl;
}

const std::string &Weapon::getType( void ) const
{
	return _type;
}

void Weapon::setType( const std::string &type )
{
	_type = type;
	std::cout << "Weapon type set to '" << C_MAGENTA << _type << C_RESET << "'." << std::endl;
}
