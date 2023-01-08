/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:07:02 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 00:20:18 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

int main( void )
{
	std::cout << "John is a new bureaucrat in the government office." << std::endl;
	try
	{
		Bureaucrat john("John", 3);
		std::cout << john << std::endl;

		std::cout << "John works hard and gets promoted." << std::endl;
		john.incrementGrade();
		std::cout << john << std::endl;

		std::cout << "John's boss is impressed and promotes him again." << std::endl;
		john.incrementGrade();
		std::cout << john << std::endl;

		std::cout << "John is now at the highest grade possible, 1." << std::endl;
		std::cout << john << std::endl;

		std::cout << "John's boss tries to promote him again, but it's not possible." << std::endl;
		john.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Mary is a new bureaucrat in the government office." << std::endl;
	try
	{
		Bureaucrat mary("Mary", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Bob is a new bureaucrat in the government office." << std::endl;
	try
	{
		Bureaucrat bob("Bob", 149);
		std::cout << bob << std::endl;

		std::cout << "Bob's boss is not impressed and demotes him." << std::endl;
		bob.decrementGrade();

		std::cout << "Bob's boss is not impressed and demotes him again." << std::endl;
		bob.decrementGrade();

		std::cout << "Bob is now at the lowest grade possible, 150." << std::endl;
		std::cout << bob << std::endl;

		std::cout << "Bob's boss tries to demote him again, but it's not possible." << std::endl;
		bob.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Sue is a new bureaucrat in the government office." << std::endl;
	try
	{
		Bureaucrat sue("Sue", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
