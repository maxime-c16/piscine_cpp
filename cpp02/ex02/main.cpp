/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:02:12 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/11 11:41:51 by macauchy         ###   ########.fr       */
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
	std::cout << C_CYAN << "=== FIXED POINT OPERATOR OVERLOADING DEMONSTRATION ===" << C_RESET << std::endl;

	printTest("1: ARITHMETIC OPERATORS");
	std::cout << C_GREEN << "Testing +, -, *, / operators:" << C_RESET << std::endl;

	Fixed a(10.5f);
	Fixed b(3.25f);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a + b = " << C_MAGENTA << (a + b) << C_RESET << std::endl;
	std::cout << "a - b = " << C_MAGENTA << (a - b) << C_RESET << std::endl;
	std::cout << "a * b = " << C_MAGENTA << (a * b) << C_RESET << std::endl;
	std::cout << "a / b = " << C_MAGENTA << (a / b) << C_RESET << std::endl;

	printTest("2: COMPARISON OPERATORS");
	std::cout << C_YELLOW << "Testing ==, !=, <, <=, >, >= operators:" << C_RESET << std::endl;

	Fixed x(42.0f);
	Fixed y(42.0f);
	Fixed z(10.5f);

	std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
	std::cout << "x == y: " << C_BLUE << (x == y ? "true" : "false") << C_RESET << std::endl;
	std::cout << "x != z: " << C_BLUE << (x != z ? "true" : "false") << C_RESET << std::endl;
	std::cout << "z < x: " << C_BLUE << (z < x ? "true" : "false") << C_RESET << std::endl;
	std::cout << "x >= y: " << C_BLUE << (x >= y ? "true" : "false") << C_RESET << std::endl;

	printTest("3: INCREMENT/DECREMENT OPERATORS");
	std::cout << C_RED << "Testing ++/-- (pre and post increment/decrement):" << C_RESET << std::endl;

	Fixed counter(5.5f);
	std::cout << "Initial counter: " << counter << std::endl;
	std::cout << "++counter: " << C_MAGENTA << ++counter << C_RESET << " (counter is now: " << counter << ")" << std::endl;
	std::cout << "counter++: " << C_MAGENTA << counter++ << C_RESET << " (counter is now: " << counter << ")" << std::endl;
	std::cout << "--counter: " << C_MAGENTA << --counter << C_RESET << " (counter is now: " << counter << ")" << std::endl;
	std::cout << "counter--: " << C_MAGENTA << counter-- << C_RESET << " (counter is now: " << counter << ")" << std::endl;

	printTest("4: STATIC MIN/MAX FUNCTIONS");
	std::cout << C_CYAN << "Testing static min() and max() functions:" << C_RESET << std::endl;

	Fixed num1(15.75f);
	Fixed num2(8.25f);

	std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
	std::cout << "min(num1, num2) = " << C_GREEN << Fixed::min(num1, num2) << C_RESET << std::endl;
	std::cout << "max(num1, num2) = " << C_GREEN << Fixed::max(num1, num2) << C_RESET << std::endl;
	return 0;
}
