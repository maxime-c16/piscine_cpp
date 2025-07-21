/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:26:56 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 17:47:07 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void printTest(const std::string& title)
{
	std::cout << C_CYAN << "\n=== TEST " << title << " ===" << C_RESET << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << C_CYAN << "=== HARL FILTER DEMONSTRATION ===" << C_RESET << std::endl;
		std::cout << C_YELLOW << "Usage: ./harlFilter <level>" << C_RESET << std::endl;
		return 0;
	}

	std::string level = av[1];
	Harl harl;

	std::cout << C_CYAN << "=== HARL FILTER: " << level << " ===" << C_RESET << std::endl;
	harl.complain(level);

	std::cout << C_CYAN << "\n=== KEY LEARNINGS ===" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Pointers to member functions: void (Harl::*functions[4])(void)" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Array-based function dispatch (no if/else forest)" << C_RESET << std::endl;
	std::cout << C_GREEN << "• While loop for cascading level output" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Function pointer syntax: (this->*functions[i])()" << C_RESET << std::endl;
	std::cout << C_RED << "• Filtering behavior: shows requested level + all higher levels" << C_RESET << std::endl;

	return 0;
}
