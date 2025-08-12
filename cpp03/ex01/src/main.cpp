/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:52:54 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/12 14:45:05 by macauchy         ###   ########.fr       */
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

	printTest("1: INHERITANCE COMPARISON");
	std::cout << C_GREEN << "Comparing ClapTrap vs ScavTrap:" << C_RESET << std::endl;
	
	ClapTrap clap("ClapBot");
	ScavTrap scav("ScavBot");
	
	std::cout << C_YELLOW << "Attack comparison:" << C_RESET << std::endl;
	clap.attack("target");
	scav.attack("target");

	printTest("2: SCAVTRAP SPECIAL ABILITIES");
	std::cout << C_GREEN << "Testing ScavTrap's unique features:" << C_RESET << std::endl;
	
	scav.guardGate();
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();

	printTest("3: EDGE CASES");
	std::cout << C_GREEN << "Testing ScavTrap limits:" << C_RESET << std::endl;
	
	ScavTrap testBot("TestBot");
	std::cout << C_YELLOW << "Taking massive damage (150 points):" << C_RESET << std::endl;
	testBot.takeDamage(150);
	testBot.guardGate();
	testBot.attack("target");
	return 0;
}
