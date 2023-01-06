/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:55:28 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 13:23:45 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( "default" )
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap( FragTrap const &ref ) : ClapTrap( ref )
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " created by ref to ClapTrap " << ref._name << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &ref )
{
	this->_name = ref._name;
	this->_hitPoint = ref._hitPoint;
	this->_energyPoint = ref._energyPoint;
	this->_attackDamage = ref._attackDamage;
	std::cout << "FragTrap " << this->_name << " copied" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " requests a high five" << std::endl;
}
