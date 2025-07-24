/* *****************Ice::Ice() : AMateria("ice")
{
	std::cout << C_CYAN << "Ice materia created" << C_RESET << std::endl;
}***************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:45:52 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:01:32 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"

// Color definitions
#define C_CYAN "\033[36m"
#define C_RESET "\033[0m"
#define C_BLUE "\033[34m"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << C_CYAN << "Ice materia created" << C_RESET << std::endl;
}

Ice::Ice( const Ice &ref ) : AMateria(ref)
{
	_type = ref._type;
	std::cout << C_CYAN << "Ice materia copied" << C_RESET << std::endl;
}

Ice::~Ice( void )
{
	std::cout << C_BLUE << "Ice materia destroyed" << C_RESET << std::endl;
}

Ice	&Ice::operator=( const Ice &ref )
{
	if (this != &ref)
	{
		AMateria::operator=(ref);
	}
	return *this;
}

AMateria	*Ice::clone( void ) const
{
	return new Ice(*this);
}

void	Ice::use( ICharacter &target )
{
	std::cout << C_CYAN << "* shoots an ice bolt at " << target.getName() << " *" << C_RESET << std::endl;
}
