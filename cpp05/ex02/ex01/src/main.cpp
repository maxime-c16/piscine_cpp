/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:19:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/27 13:14:27 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/Colors.hpp"

int main()
{
	std::cout << BOLD_CYAN << "╔══════════════════════════════════════════════╗" << RESET << std::endl;
	std::cout << BOLD_CYAN << "║       FORM AND BUREAUCRAT TESTING           ║" << RESET << std::endl;
	std::cout << BOLD_CYAN << "╚══════════════════════════════════════════════╝" << RESET << std::endl;
	std::cout << std::endl;

	// Test Form creation
	std::cout << BOLD_GREEN << "🟢 FORM CREATION TESTS" << RESET << std::endl;
	std::cout << YELLOW << "────────────────────────────────────────────" << RESET << std::endl;

	try {
		Form taxForm("Tax Form", 50, 25);
		std::cout << CYAN << "Form: " << taxForm.getName() << ", signed: " << (taxForm.isSigned() ? "Yes" : "No")
			<< ", sign grade: " << taxForm.getSignGrade() << ", exec grade: " << taxForm.getExecGrade() << RESET << std::endl;
		
		std::cout << BOLD_WHITE << "Testing operator<< for Form:" << RESET << std::endl;
		std::cout << CYAN << taxForm << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "❌ Exception: " << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	// Test Form exception cases
	std::cout << BOLD_RED << "🔴 FORM EXCEPTION TESTS" << RESET << std::endl;
	std::cout << YELLOW << "────────────────────────────────────────────" << RESET << std::endl;

	try {
		Form invalidForm("Invalid", 0, 50);
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "✅ Expected exception (grade too high): " << e.what() << RESET << std::endl;
	}

	try {
		Form invalidForm("Invalid", 50, 151);
	} catch (std::exception &e) {
		std::cout << BOLD_RED << "✅ Expected exception (grade too low): " << e.what() << RESET << std::endl;
	}
	std::cout << std::endl;

	// Test signForm functionality
	std::cout << BOLD_GREEN << "� SIGN FORM TESTS" << RESET << std::endl;
	std::cout << YELLOW << "────────────────────────────────────────────" << RESET << std::endl;

	try {
		Bureaucrat bob("Bob", 30);
		Bureaucrat alice("Alice", 80);
		Form importantForm("Important Document", 50, 25);

		std::cout << BOLD_WHITE << "Bob (grade 30) attempts to sign form (requires grade 50):" << RESET << std::endl;
		bob.signForm(importantForm);
		std::cout << CYAN << "Form status: signed = " << (importantForm.isSigned() ? "Yes" : "No") << RESET << std::endl;
		std::cout << BOLD_WHITE << "Form using operator<<: " << RESET << importantForm << std::endl;
		std::cout << std::endl;

		Form strictForm("Strict Document", 20, 10);
		std::cout << BOLD_WHITE << "Alice (grade 80) attempts to sign strict form (requires grade 20):" << RESET << std::endl;
		alice.signForm(strictForm);
		std::cout << CYAN << "Form status: signed = " << (strictForm.isSigned() ? "Yes" : "No") << RESET << std::endl;
		std::cout << std::endl;

		std::cout << BOLD_WHITE << "Bob (grade 30) attempts to sign strict form (requires grade 20):" << RESET << std::endl;
		bob.signForm(strictForm);
		std::cout << CYAN << "Form status: signed = " << (strictForm.isSigned() ? "Yes" : "No") << RESET << std::endl;

	} catch (std::exception &e) {
		std::cout << BOLD_RED << "❌ Exception: " << e.what() << RESET << std::endl;
	}

	std::cout << std::endl;
	std::cout << BOLD_CYAN << "╔══════════════════════════════════════════════╗" << RESET << std::endl;
	std::cout << BOLD_CYAN << "║            ALL TESTS COMPLETED              ║" << RESET << std::endl;
	std::cout << BOLD_CYAN << "╚══════════════════════════════════════════════╝" << RESET << std::endl;

	return 0;
}
