/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:14:51 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:01:18 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria( void ) : _type("default")
{
}

AMateria::AMateria( const std::string &type ) : _type(type)
{
}

AMateria::AMateria( const AMateria &ref ) : _type(ref._type)
{
}

AMateria::~AMateria( void )
{
}

AMateria	&AMateria::operator=( const AMateria &ref )
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

std::string const &AMateria::getType( void ) const
{
	return _type;
}

void	AMateria::use( ICharacter &target )
{
	std::cout << "AMateria of type " << _type << " used on " << target.getName() << "." << std::endl;
}
