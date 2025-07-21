/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:53:23 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:31:59 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::cout << C_GREEN "=== Testing Heap Zombie ===" C_RESET << std::endl;
	Zombie	*heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	std::cout << C_YELLOW "=== Testing Stack Zombie ===" C_RESET << std::endl;
	randomChump("StackZombie");

	std::cout << C_BLUE "=== Testing Scope difference ===" C_RESET << std::endl;
	Zombie *persistentZombie = newZombie("PersistentZombie");
	{
		std::cout << C_MAGENTA "Entering inner scope..." C_RESET << std::endl;
		randomChump("TemporaryZombie");
		std::cout << C_MAGENTA "Exiting inner scope..." C_RESET << std::endl;
	}
	std::cout << C_CYAN "Persistent Zombie still exists." C_RESET << std::endl;
	persistentZombie->announce();
	delete persistentZombie;

	std::cout << C_CYAN "\n=== KEY LEARNINGS ===" C_RESET << std::endl;
	std::cout << C_GREEN "• newZombie() creates zombies on HEAP - use when you need persistence" C_RESET << std::endl;
	std::cout << C_GREEN "• randomChump() creates zombies on STACK - use for temporary objects" C_RESET << std::endl;
	std::cout << C_GREEN "• Heap objects persist until explicitly deleted with 'delete'" C_RESET << std::endl;
	std::cout << C_GREEN "• Stack objects are automatically destroyed when leaving scope" C_RESET << std::endl;
	std::cout << C_RED "• ALWAYS delete heap-allocated objects to prevent memory leaks!" C_RESET << std::endl;

	return 0;
}
