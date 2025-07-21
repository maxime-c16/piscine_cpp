/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:52:06 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 16:31:59 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

int	main( void )
{
	std::string hello = "HI THIS IS BRAIN";
	std::string *stringPTR = &hello;
	std::string &stringREF = hello;

	std::cout << "Memory address of the string variable:\t " << &hello << std::endl;
	std::cout << "Memory address held by stringPTR:\t " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF:\t " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "String: " << hello << std::endl;
	std::cout << "String pointer: " << *stringPTR << std::endl;
	std::cout << "String reference: " << stringREF << std::endl;

	std::cout << "\n=== KEY LEARNINGS ===" << std::endl;
	std::cout << "• Pointers store memory addresses and need * to access values" << std::endl;
	std::cout << "• References are aliases - they ARE the original variable" << std::endl;
	std::cout << "• All three (variable, pointer, reference) point to same memory" << std::endl;
	std::cout << "• References must be initialized and cannot be reassigned" << std::endl;
	std::cout << "• Pointers can be null and reassigned to different addresses" << std::endl;

	return (0);
}
