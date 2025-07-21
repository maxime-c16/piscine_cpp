/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:52:54 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 14:04:38 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <sstream>

#define C_GREEN "\033[32m"
#define C_RESET "\033[0m"
#define C_YELLOW "\033[33m"
#define C_RED "\033[31m"
#define C_BLUE "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN "\033[36m"

void printTest(const std::string& title) {
    std::cout << C_CYAN << "\n=== TEST " << title << " ===" << C_RESET << std::endl;
}

std::string intToString(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

int	main( void )
{
	std::cout << C_CYAN << "=== SCAVTRAP INHERITANCE DEMONSTRATION ===" << C_RESET << std::endl;

	printTest("1: INHERITANCE AND CONSTRUCTOR COMPARISON");
	std::cout << C_GREEN << "Comparing ClapTrap vs ScavTrap creation:" << C_RESET << std::endl;
	
	std::cout << C_YELLOW << "Creating ClapTrap:" << C_RESET << std::endl;
	ClapTrap clap("ClapBot");
	
	std::cout << C_YELLOW << "Creating ScavTrap:" << C_RESET << std::endl;
	ScavTrap scav("ScavBot");
	
	std::cout << C_YELLOW << "Comparing attack power:" << C_RESET << std::endl;
	clap.attack("target1");
	scav.attack("target2");

	printTest("2: SCAVTRAP SPECIAL ABILITIES");
	std::cout << C_GREEN << "Testing ScavTrap's unique guardGate function:" << C_RESET << std::endl;
	
	ScavTrap guardian("Guardian");
	guardian.guardGate();
	
	std::cout << C_YELLOW << "Testing ScavTrap durability (100 HP vs ClapTrap's 10 HP):" << C_RESET << std::endl;
	guardian.takeDamage(50);
	guardian.attack("intruder");
	guardian.beRepaired(10);

	printTest("3: ENERGY AND ENDURANCE COMPARISON");
	std::cout << C_GREEN << "Testing energy differences (ScavTrap: 50 vs ClapTrap: 10):" << C_RESET << std::endl;
	
	ClapTrap weakBot("WeakBot");
	ScavTrap strongBot("StrongBot");
	
	std::cout << C_YELLOW << "ClapTrap performing 11 attacks (should run out of energy):" << C_RESET << std::endl;
	for (int i = 1; i <= 11; i++) {
		std::cout << C_MAGENTA << "ClapTrap Attack #" << i << ": " << C_RESET;
		weakBot.attack("enemy" + intToString(i));
	}
	
	std::cout << C_YELLOW << "ScavTrap performing 15 attacks (should still have energy):" << C_RESET << std::endl;
	for (int i = 1; i <= 15; i++) {
		std::cout << C_MAGENTA << "ScavTrap Attack #" << i << ": " << C_RESET;
		strongBot.attack("enemy" + intToString(i));
	}
	
	strongBot.guardGate();

	std::cout << C_CYAN << "\n=== KEY LEARNINGS ===" << C_RESET << std::endl;
	std::cout << C_GREEN << "• ScavTrap inherits from ClapTrap (IS-A relationship)" << C_RESET << std::endl;
	std::cout << C_GREEN << "• ScavTrap: 100 HP, 50 energy, 20 attack vs ClapTrap: 10 HP, 10 energy, 0 attack" << C_RESET << std::endl;
	std::cout << C_GREEN << "• ScavTrap has unique guardGate() function" << C_RESET << std::endl;
	std::cout << C_RED << "• Inheritance allows code reuse while extending functionality" << C_RESET << std::endl;

	return 0;
}
