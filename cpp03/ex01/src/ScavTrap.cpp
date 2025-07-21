/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:45:01 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 12:46:00 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("ScavTrap")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created with default constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created with parameterized constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap " << _name << " has been created with copy constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << _name << " has been destroyed." << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << _name << " is now guarding the gate." << std::endl;
}
