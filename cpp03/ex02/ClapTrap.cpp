/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:22:04 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 13:11:13 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

void	ClapTrap::attack( std::string const &target )
{
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy cannot perform attack" << std::endl;
		return ;
	}
	_energyPoint--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy, cannot perform repair" << std::endl;
		return ;
	}
	_hitPoint += amount;
	_energyPoint--;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoint <= amount)
	{
		_hitPoint = 0;
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << "ClapTrap " << this->_name << " is damaged for " << amount << " points, " << _hitPoint << " points left" << std::endl;
	}
}

unsigned int	ClapTrap::getHitPoint( void ) const
{
	return (this->_hitPoint);
}

unsigned int	ClapTrap::getEnergyPoint( void ) const
{
	return (this->_energyPoint);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

std::string		ClapTrap::getName( void ) const
{
	return (this->_name);
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &ref )
{
	this->_name = ref._name;
	this->_hitPoint = ref._hitPoint;
	this->_energyPoint = ref._energyPoint;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}
