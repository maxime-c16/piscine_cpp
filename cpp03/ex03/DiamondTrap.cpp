/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:35:35 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 16:06:37 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &ref ) : ClapTrap(ref._name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap " << this->_name << " copy constructor called" << std::endl;
	*this = ref;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &ref )
{
	this->_name = ref._name;
	this->_hitPoint = ref._hitPoint;
	this->_energyPoint = ref._energyPoint;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << std::endl << "--- whoAmI ? ---" << std::endl;
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack( std::string const &target )
{
	ScavTrap::attack(target);
}
