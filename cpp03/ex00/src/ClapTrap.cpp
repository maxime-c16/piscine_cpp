/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:39:16 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 12:24:19 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created with default constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

ClapTrap::ClapTrap( const std::string &name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created with name constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	*this = other;
	std::cout << "ClapTrap " << _name << " has been created with copy constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &other )
{
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string &target )
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " cannot attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoints > 0)
	{
		if (amount >= _hitPoints)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount
				  << " points of damage! Remaining hit points: " << _hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " is repaired for " << amount
				  << " hit points! Current hit points: " << _hitPoints << std::endl;
	}
	else
	{
		if (_hitPoints == 0)
			std::cout << "ClapTrap " << _name << " is already destroyed and cannot be repaired!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " has no energy points to repair!" << std::endl;
	}
}
