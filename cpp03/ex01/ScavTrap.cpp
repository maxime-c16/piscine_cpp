/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:58:47 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 13:23:59 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( "default" )
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &ref ) : ClapTrap( ref )
{
	this->_hitPoint = ref._hitPoint;
	this->_energyPoint = ref._energyPoint;
	this->_attackDamage = ref._attackDamage;
	std::cout << "ScavTrap " << this->_name << " created by ref to ClapTrap " << ref._name << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " destroyed" << std::endl;
}

void	ScavTrap::attack( std::string const &target )
{
	if (this->_energyPoint > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &ref )
{
	this->_name = ref._name;
	this->_hitPoint = ref._hitPoint;
	this->_energyPoint = ref._energyPoint;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
