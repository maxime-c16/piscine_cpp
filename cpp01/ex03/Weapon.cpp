/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:34:07 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 22:28:17 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//const & dest

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << _type << " [Weapon] created" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << _type << " [Weapon] destroyed" << std::endl;
}

//get

std::string	&Weapon::getType( void )
{
	std::string	&ref = _type;
	return (ref);
}

//set

void	Weapon::setType( std::string type )
{
	if (type == "")
		std::cout << "Error: type cannot be empty" << std::endl;
	else
		this->_type = type;
}
