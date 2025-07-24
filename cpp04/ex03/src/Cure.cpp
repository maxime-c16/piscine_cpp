/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:49:51 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:31:00 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"

// Color definitions
#define C_GREEN "\033[32m"
#define C_RESET "\033[0m"
#define C_YELLOW "\033[33m"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << C_GREEN << "Cure default constructor called" << C_RESET << std::endl;
}

Cure::Cure( const Cure &ref ) : AMateria(ref)
{
	std::cout << C_GREEN << "Cure copy constructor called" << C_RESET << std::endl;
	_type = ref._type;
}

Cure::~Cure( void )
{
	std::cout << C_YELLOW << "Cure destructor called" << C_RESET << std::endl;
}

Cure	&Cure::operator=( const Cure &ref )
{
	if (this != &ref)
	{
		AMateria::operator=(ref);
		this->_type = ref._type;
	}
	return *this;
}

AMateria	*Cure::clone( void ) const
{
	return new Cure(*this);
}

void	Cure::use( ICharacter &target )
{
	std::cout << C_GREEN << "* heals " << target.getName() << "'s wounds *" << C_RESET << std::endl;
}
