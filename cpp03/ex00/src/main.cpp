/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:52:54 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/21 12:03:37 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <sstream>

// Color definitions for enhanced output
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
	std::cout << C_CYAN << "=== CLAPTRAP CLASS DEMONSTRATION ===" << C_RESET << std::endl;

	printTest("1: BASIC FUNCTIONALITY");
	std::cout << C_GREEN << "Testing constructors, attack, damage, and repair:" << C_RESET << std::endl;
	
	ClapTrap bot("CLTP");
	bot.attack("enemy");
	bot.takeDamage(3);
	bot.beRepaired(2);
	bot.attack("another enemy");

	printTest("2: EDGE CASES - DAMAGE AND DESTRUCTION");
	std::cout << C_GREEN << "Testing excessive damage and destroyed state:" << C_RESET << std::endl;
	
	ClapTrap fighter("Fighter");
	std::cout << C_YELLOW << "Taking massive damage (20 points):" << C_RESET << std::endl;
	fighter.takeDamage(20);
	
	std::cout << C_YELLOW << "Trying to attack when destroyed:" << C_RESET << std::endl;
	fighter.attack("target");
	
	std::cout << C_YELLOW << "Trying to repair when destroyed:" << C_RESET << std::endl;
	fighter.beRepaired(5);

	printTest("3: ENERGY DEPLETION");
	std::cout << C_GREEN << "Testing energy point exhaustion:" << C_RESET << std::endl;
	
	ClapTrap energyBot("EnergyBot");
	std::cout << C_YELLOW << "Performing 11 attacks to drain all energy:" << C_RESET << std::endl;
	
	for (int i = 1; i <= 11; i++) {
		std::cout << C_MAGENTA << "Attack #" << i << ": " << C_RESET;
		energyBot.attack("target" + intToString(i));
	}
	
	std::cout << C_YELLOW << "Trying to repair with no energy:" << C_RESET << std::endl;
	energyBot.beRepaired(1);

	std::cout << C_CYAN << "\n=== KEY LEARNINGS ===" << C_RESET << std::endl;
	std::cout << C_GREEN << "• ClapTrap starts with 10 HP, 10 energy, 0 attack damage" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Attack and repair consume 1 energy point each" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Cannot attack or repair with 0 energy or when destroyed" << C_RESET << std::endl;
	std::cout << C_RED << "• HP cannot go below 0 (unsigned int protection)" << C_RESET << std::endl;

	return 0;
}
