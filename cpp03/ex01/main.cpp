/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:23:51 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 14:24:14 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	// Create a ClapTrap and a ScavTrap
	ClapTrap clapTrap("Claptrap");
	ScavTrap scavTrap("ScavTrap");

	// Print the name and hit points of each robot
	std::cout << "ClapTrap: " << clapTrap.getName() << " has " << clapTrap.getHitPoint() << " hit points" << std::endl;
	std::cout << "ScavTrap: " << scavTrap.getName() << " has " << scavTrap.getHitPoint() << " hit points" << std::endl;

	// Test the attack and takeDamage functions
	std::cout << std::endl << "--- Attacking ---" << std::endl;
	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());

	std::cout << std::endl << "--- Repairing ---" << std::endl;
	clapTrap.beRepaired(5);
	scavTrap.beRepaired(10);

	std::cout << std::endl << "--- Special abilities ---" << std::endl;
	scavTrap.guardGate();

	return (0);
}
