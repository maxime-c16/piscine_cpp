/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:02:12 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/11 11:29:35 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

int	main( void )
{
	std::cout << C_CYAN << "=== FIXED POINT ARITHMETIC DEMONSTRATION ===" << C_RESET << std::endl;

	printTest("1: CONSTRUCTORS & ASSIGNMENT");
	std::cout << C_GREEN << "Testing default, copy, int, and float constructors:" << C_RESET << std::endl;

	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	std::cout << "a (default): " << a << std::endl;
	std::cout << "b (int 10): " << b << std::endl;
	std::cout << "c (float 42.42f): " << c << std::endl;
	std::cout << "d (copy of b): " << d << std::endl;

	printTest("2: CONVERSION METHODS");
	std::cout << C_YELLOW << "Testing toInt() and toFloat() conversions:" << C_RESET << std::endl;

	Fixed e(25.75f);
	Fixed f(-10);

	std::cout << "e = " << e << " -> toInt(): " << C_MAGENTA << e.toInt() << C_RESET
			  << ", toFloat(): " << C_MAGENTA << e.toFloat() << C_RESET << std::endl;
	std::cout << "f = " << f << " -> toInt(): " << C_MAGENTA << f.toInt() << C_RESET
			  << ", toFloat(): " << C_MAGENTA << f.toFloat() << C_RESET << std::endl;

	printTest("3: PRECISION DEMONSTRATION");
	std::cout << C_BLUE << "Testing fixed-point precision with small values:" << C_RESET << std::endl;

	Fixed small1(0.25f);
	Fixed small2(0.125f);
	Fixed small3(0.0625f);

	std::cout << "small1 (0.25f): " << small1 << " | Raw bits: " << small1.getRawBits() << std::endl;
	std::cout << "small2 (0.125f): " << small2 << " | Raw bits: " << small2.getRawBits() << std::endl;
	std::cout << "small3 (0.0625f): " << small3 << " | Raw bits: " << small3.getRawBits() << std::endl;

	printTest("4: ASSIGNMENT & INDEPENDENCE");
	std::cout << C_RED << "Testing assignment operator and object independence:" << C_RESET << std::endl;

	Fixed original(100.5f);
	Fixed copy;

	std::cout << "Before assignment - original: " << original << ", copy: " << copy << std::endl;

	copy = original;
	std::cout << "After assignment - original: " << original << ", copy: " << copy << std::endl;

	original.setRawBits(0);
	std::cout << "After modifying original - original: " << original << ", copy: " << copy << std::endl;
	std::cout << C_GREEN << "Copy remains unchanged - objects are independent!" << C_RESET << std::endl;
	return 0;
}
