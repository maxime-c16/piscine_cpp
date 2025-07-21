/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:12:01 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:20:17 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void	printTest( const std::string& title )
{
	std::cout << C_CYAN << "\n=== TEST " << title << " ===" << C_RESET << std::endl;
}

int	main( void )
{
	printTest("1: REFERENCES VS POINTERS");
	std::cout << C_YELLOW << "HumanA uses weapon reference (must be initialized)" << C_RESET << std::endl;
	{
		Weapon club = Weapon("spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("upgraded club");
		bob.attack();
	}

	std::cout << C_YELLOW << "HumanB uses weapon pointer (can be set later)" << C_RESET << std::endl;
	{
		Weapon sword = Weapon("steel sword");
		HumanB alice("Alice");
		alice.setWeapon(sword);
		alice.attack();
	}

	printTest("2: OBJECT LIFETIME & SCOPE");
	std::cout << C_GREEN << "Demonstrating stack object destruction" << C_RESET << std::endl;
	{
		HumanB charlie("Charlie");
		{
			Weapon tempWeapon = Weapon("temporary dagger");
			charlie.setWeapon(tempWeapon);
			charlie.attack();
			std::cout << C_RED << "Leaving inner scope - weapon will be destroyed!" << C_RESET << std::endl;
		}
		std::cout << C_RED << "Charlie's weapon pointer is now invalid (dangling)" << C_RESET << std::endl;
	}

	printTest("3: SHARED REFERENCES");
	std::cout << C_MAGENTA << "Multiple objects sharing same weapon reference" << C_RESET << std::endl;
	{
		Weapon sharedAxe = Weapon("battle axe");
		HumanA diana("Diana", sharedAxe);
		HumanB erik("Erik");
		erik.setWeapon(sharedAxe);

		std::cout << "Both attack with original weapon:" << std::endl;
		diana.attack();
		erik.attack();

		sharedAxe.setType("legendary axe");
		std::cout << "After weapon upgrade:" << std::endl;
		diana.attack();
		erik.attack();
	}

	printTest("4: MEMORY SAFETY COMPARISON");
	std::cout << C_BLUE << "Why HumanA (reference) is safer than HumanB (pointer)" << C_RESET << std::endl;
	{
		Weapon safeWeapon = Weapon("safe weapon");
		HumanA frank("Frank", safeWeapon);

		std::cout << C_GREEN << "HumanA: Weapon reference is always valid" << C_RESET << std::endl;
		frank.attack();

		HumanB grace("Grace");
		std::cout << C_RED << "HumanB: Must check if weapon exists before use" << C_RESET << std::endl;
		grace.setWeapon(safeWeapon);
		std::cout << C_GREEN << "HumanB: Now safe to attack" << C_RESET << std::endl;
		grace.attack();
	}

	std::cout << C_CYAN << "\n=== KEY LEARNINGS ===" << C_RESET << std::endl;
	std::cout << C_GREEN << "• References must be initialized and can't be reassigned" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Pointers can be null and reassigned but need careful management" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Stack objects are automatically destroyed when scope ends" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Multiple objects can safely share references to the same data" << C_RESET << std::endl;

	return 0;
}
