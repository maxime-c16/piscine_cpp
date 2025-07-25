/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:19:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/25 15:00:50 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Colors.hpp"

int main()
{
	std::cout << BOLD_CYAN << "╔══════════════════════════════════════════════╗" << RESET << std::endl;
	std::cout << BOLD_CYAN << "║          BUREAUCRAT CLASS TESTING            ║" << RESET << std::endl;
	std::cout << BOLD_CYAN << "╚══════════════════════════════════════════════╝" << RESET << std::endl;
	std::cout << std::endl;

	try {
		std::cout << BOLD_GREEN << "🟢 BASIC FUNCTIONALITY TESTS" << RESET << std::endl;
		std::cout << YELLOW << "────────────────────────────────────────────" << RESET << std::endl;

		// Test basic creation
		std::cout << BOLD_WHITE << "Creating Bureaucrat 'Bob' with grade 75:" << RESET << std::endl;
		Bureaucrat bob("Bob", 75);
		std::cout << CYAN << "Result: " << RESET << bob << std::endl;
		std::cout << std::endl;

		// Test increment
		std::cout << BOLD_WHITE << "Incrementing Bob's grade:" << RESET << std::endl;
		bob.incrementGrade();
		std::cout << CYAN << "Result: " << RESET << bob << std::endl;
		std::cout << std::endl;

		// Test decrement
		std::cout << BOLD_WHITE << "Decrementing Bob's grade:" << RESET << std::endl;
		bob.decrementGrade();
		std::cout << CYAN << "Result: " << RESET << bob << std::endl;
		std::cout << std::endl;

		// Test copy constructor
		std::cout << BOLD_WHITE << "Testing copy constructor (Alice = copy of Bob):" << RESET << std::endl;
		Bureaucrat alice(bob);
		std::cout << CYAN << "Result: " << RESET << alice << std::endl;
		std::cout << std::endl;

		// Test assignment operator
		std::cout << BOLD_WHITE << "Testing assignment operator (Charlie = Bob):" << RESET << std::endl;
		Bureaucrat charlie("Charlie", 100);
		std::cout << DIM << "Before assignment: " << RESET << charlie << std::endl;
		charlie = bob;
		std::cout << CYAN << "After assignment:  " << RESET << charlie << std::endl;
		std::cout << std::endl;

	} catch (std::exception &e) {
		std::cout << BOLD_RED << "❌ Exception caught: " << e.what() << RESET << std::endl;
	}

	std::cout << BOLD_RED << "🔴 EXCEPTION TESTS" << RESET << std::endl;
	std::cout << YELLOW << "────────────────────────────────────────────" << RESET << std::endl;

	try {
		// Test exception for grade too high
		std::cout << BOLD_WHITE << "Testing grade too high (grade = 0):" << RESET << std::endl;
		Bureaucrat invalid("Invalid", 0);
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "✅ Expected exception caught: " << RESET << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	try {
		// Test exception for grade too low
		std::cout << BOLD_WHITE << "Testing grade too low (grade = 151):" << RESET << std::endl;
		Bureaucrat invalid("Invalid", 151);
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "✅ Expected exception caught: " << RESET << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	// Test increment/decrement edge cases
	std::cout << BOLD_WHITE << "Testing increment at highest grade (grade = 1):" << RESET << std::endl;
	try {
		Bureaucrat topBureaucrat("TopGuy", 1);
		std::cout << CYAN << "Before increment: " << RESET << topBureaucrat << std::endl;
		topBureaucrat.incrementGrade();
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "✅ Expected exception caught: " << RESET << RED << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD_WHITE << "Testing decrement at lowest grade (grade = 150):" << RESET << std::endl;
	try {
		Bureaucrat lowBureaucrat("LowGuy", 150);
		std::cout << CYAN << "Before decrement: " << RESET << lowBureaucrat << std::endl;
		lowBureaucrat.decrementGrade();
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "✅ Expected exception caught: " << RESET << RED << e.what() << RESET << std::endl;
	}

	std::cout << std::endl;
	std::cout << BOLD_CYAN << "╔══════════════════════════════════════════════╗" << RESET << std::endl;
	std::cout << BOLD_CYAN << "║            ALL TESTS COMPLETED              ║" << RESET << std::endl;
	std::cout << BOLD_CYAN << "╚══════════════════════════════════════════════╝" << RESET << std::endl;

	return 0;
}
