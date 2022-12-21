/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:54:57 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 22:26:49 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//const & dest

HumanB::HumanB( std::string name, Weapon *ptr ) : _arm(ptr), _name(name)
{
	std::cout << name << " [HumanB] created with " << ptr->getType() << std::endl;
}

HumanB::HumanB( std::string name ) : _name(name)
{
	std::cout << name << " [HumanB] created with no weapon" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name << " [HumanB] destroyed" << std::endl;
}

//getter

std::string	&HumanB::getName( void )
{
	std::string	&ref = _name;
	return (ref);
}

//setter

void		HumanB::setWeapon( Weapon ptr )
{
	_arm = &ptr;
}

//attack

void	HumanB::attack( void ) const
{
	if (_arm)
		std::cout << _name << " attacks with their " << _arm->getType() << std::endl;
	else
		std::cout << _name << " attacks with their fists" << std::endl;
}
