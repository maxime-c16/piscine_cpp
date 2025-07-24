/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:16:13 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/23 14:54:05 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void printTest(const std::string& title) {
    std::cout << C_CYAN << "\n=== TEST " << title << " ===" << C_RESET << std::endl;
}

void runDemonstrationTests() {
	Harl harl;

	printTest("1: ALL COMPLAINT LEVELS");
	std::cout << C_GREEN << "Testing all valid complaint levels:" << C_RESET << std::endl;

	std::string debug = "DEBUG";
	std::string info = "INFO";
	std::string warning = "WARNING";
	std::string error = "ERROR";

	harl.complain(debug);
	harl.complain(info);
	harl.complain(warning);
	harl.complain(error);

	printTest("2: INVALID LEVELS");
	std::cout << C_YELLOW << "Testing invalid complaint levels:" << C_RESET << std::endl;

	std::string invalid1 = "INVALID";
	std::string invalid2 = "debug";
	std::string invalid3 = "";

	harl.complain(invalid1);
	harl.complain(invalid2);
	harl.complain(invalid3);
}

int	main( void )
{
	std::cout << C_CYAN << "=== HARL COMPLAINT SYSTEM ===" << C_RESET << std::endl;
	runDemonstrationTests();
	std::cout << C_BLUE << "\nEnter complaint levels (DEBUG, INFO, WARNING, ERROR). Press Ctrl+C to exit:" << C_RESET << std::endl;
	Harl harl;
	std::string userLevel;

	while (true)
	{
		std::cout << C_GREEN << "Harl> " << C_RESET;

		if (!std::getline(std::cin, userLevel))
		{
			std::cout << C_YELLOW << "\nInput stream closed. Exiting..." << C_RESET << std::endl;
			break;
		}
		if (!userLevel.empty())
			harl.complain(userLevel);
	}
	return 0;
}
