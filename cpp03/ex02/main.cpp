/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:48:38 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 13:20:42 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	std::cout << std::endl << "--- Creating robots ---" << std::endl;
	// Create a ClapTrap, a ScavTrap, and a FragTrap
	ClapTrap clapTrap("foo");
	ScavTrap scavTrap("bar");
	FragTrap fragTrap("babar");

	// Print the name and hit points of each robot
	std::cout << "ClapTrap: " << clapTrap.getName() << " has " << clapTrap.getHitPoint() << " hit points and " << clapTrap.getEnergyPoint() << " energy points" << std::endl;
	std::cout << "ScavTrap: " << scavTrap.getName() << " has " << scavTrap.getHitPoint() << " hit points and " << scavTrap.getEnergyPoint() << " energy points" << std::endl;
	std::cout << "FragTrap: " << fragTrap.getName() << " has " << fragTrap.getHitPoint() << " hit points and " << fragTrap.getEnergyPoint() << " energy points" << std::endl;

	// Test the attack and takeDamage functions
	std::cout << std::endl << "--- Attacking ---" << std::endl;
	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	scavTrap.attack(fragTrap.getName());
	fragTrap.takeDamage(scavTrap.getAttackDamage());
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(fragTrap.getAttackDamage());

	std::cout << std::endl << "--- Repairing ---" << std::endl;
	clapTrap.beRepaired(5);
	scavTrap.beRepaired(10);
	fragTrap.beRepaired(20);

	std::cout << std::endl << "--- Special abilities ---" << std::endl;
	scavTrap.guardGate();
	fragTrap.highFivesGuys();

	std::cout << std::endl << "--- Energy points ---" << std::endl;
	for (int i = 0; i < 10; i++)
		clapTrap.attack("Bob");

	std::cout << std::endl << "--- Copy constructor ---" << std::endl;
	FragTrap fragTrap2(fragTrap);
	std::cout << "FragTrap2: " << fragTrap2.getName() << " has " << fragTrap2.getHitPoint() << " hit points and " << fragTrap2.getEnergyPoint() << " energy points" << std::endl;

	std::cout << std::endl << "--- Assignation operator ---" << std::endl;
	FragTrap fragTrap3;
	std::cout << "FragTrap3: " << fragTrap3.getName() << " has " << fragTrap3.getHitPoint() << " hit points and " << fragTrap3.getEnergyPoint() << " energy points" << std::endl;
	fragTrap3 = fragTrap;
	std::cout << "FragTrap3: " << fragTrap3.getName() << " has " << fragTrap3.getHitPoint() << " hit points and " << fragTrap3.getEnergyPoint() << " energy points" << std::endl;


	std::cout << std::endl << "--- Destructor ---" << std::endl;

	return (0);
}
