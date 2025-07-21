/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:07:06 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:31:59 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::cout << C_GREEN "=== Testing Zombie Horde ===" C_RESET << std::endl;
	int N = 5;
	Zombie *horde = zombieHorde(N, "HordeZombie");

	if (horde)
	{
		for (int i = 0; i < N; ++i)
			horde[i].announce();
		delete[] horde;
	}
	else
	{
		std::cerr << C_RED "Failed to create zombie horde." C_RESET << std::endl;
	}

	std::cout << C_YELLOW "=== Testing Negative Zombie ===" C_RESET << std::endl;
	N = -3;
	horde = zombieHorde(N, "NegativeZombie");
	if (!horde)
	{
		std::cout << C_RED "No zombies created due to invalid N." C_RESET << std::endl;
	}
	std::cout << C_BLUE "=== Testing Zero Zombie ===" C_RESET << std::endl;
	N = 0;
	horde = zombieHorde(N, "ZeroZombie");
	if (!horde)
	{
		std::cout << C_RED "No zombies created due to N being zero." C_RESET << std::endl;
	}

	std::cout << C_CYAN "\n=== KEY LEARNINGS ===" C_RESET << std::endl;
	std::cout << C_GREEN "• Array allocation uses 'new[]' and deallocation uses 'delete[]'" C_RESET << std::endl;
	std::cout << C_GREEN "• Default constructor is needed when creating arrays of objects" C_RESET << std::endl;
	std::cout << C_GREEN "• setName() allows modification after object creation" C_RESET << std::endl;
	std::cout << C_GREEN "• Always validate input parameters (N > 0)" C_RESET << std::endl;
	std::cout << C_RED "• Memory leak prevention: delete[] must match new[]" C_RESET << std::endl;

	return 0;
}
