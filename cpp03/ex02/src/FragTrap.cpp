/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:42:58 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/12 16:43:09 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragTrap"), ScavTrap("FragTrap")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created with default constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}

FragTrap::FragTrap( const std::string &name ) : ClapTrap(name), ScavTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created with parameterized constructor with "
				<< _hitPoints << " hit points, " << _energyPoints << " energy points and "
				<< _attackDamage << " attack damage." << std::endl;
}
