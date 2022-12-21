/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:59:50 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 22:26:34 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//const & dest

HumanA::HumanA( std::string name, Weapon &ref ) : _arm(ref), _name(name)
{
	std::cout << name << " [HumanA] created with " << ref.getType() << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name << " [HumanA] destroyed" << std::endl;
}

//getter

std::string	&HumanA::getName( void )
{
	std::string	&ref = _name;
	return (ref);
}

Weapon		&HumanA::getArm( void )
{
	Weapon	&ref = _arm;
	return (ref);
}

//attack

void		HumanA::attack( void ) const
{
	std::cout << _name << " attacks with their " << _arm.getType() << std::endl;
}
