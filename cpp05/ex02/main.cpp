/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:10:35 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/09 07:57:09 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Bureaucrat jane("Jane", 3);
	Bureaucrat john("John", 145);
	Bureaucrat jim("Jim", 72);
	Bureaucrat jake("Jake", 25);
	Bureaucrat jerry("Jerry", 5);

	std::cout << jane << std::endl;
	std::cout << john << std::endl;
	std::cout << jim << std::endl;
	std::cout << jake << std::endl;
	std::cout << jerry << std::endl;

	std::cout << "The company is looking to spruce up the office with some shrubbery." << std::endl;
	ShrubberyCreationForm form1("office");
	std::cout << form1 << std::endl;

	std::cout << "Jane tries to sign the form to plant the shrubbery but her grade is too low." << std::endl;
	try {
		form1.beSigned(jane);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "John's boss is impressed with his work and promotes him to grade 145." << std::endl;
	john.incrementGrade();
	std::cout << john << std::endl;

	std::cout << "John signs the form to plant the shrubbery." << std::endl;
	form1.beSigned(john);
	std::cout << form1 << std::endl;

	std::cout << "Jim tries to execute the form to plant the shrubbery but his grade is too low." << std::endl;
	try {
		form1.execute(jim);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Jerry's boss is impressed with his work and promotes him to grade 5." << std::endl;
	jerry.incrementGrade();
	std::cout << jerry << std::endl;

	std::cout << "Jerry executes the form to plant the shrubbery." << std::endl;
	form1.execute(jerry);

	std::cout << "The company is looking to robotomize their CEO." << std::endl;
	RobotomyRequestForm form2("CEO");
	std::cout << form2 << std::endl;

	std::cout << "Jane tries to sign the form to robotomize the CEO but her grade is too low." << std::endl;
	try {
		form2.beSigned(jane);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Jim signs the form to robotomize the CEO." << std::endl;
	form2.beSigned(jim);
	std::cout << form2 << std::endl;

	std::cout << "Jim tries to execute the form to robotomize the CEO." << std::endl;
	try {
	form2.execute(jim);
	}
	catch (std::exception& e) {
	std::cout << e.what() << std::endl;
	}

	std::cout << "The company is looking to pardon their ex-CEO." << std::endl;
	PresidentialPardonForm form3("ex-CEO");
	std::cout << form3 << std::endl;

	std::cout << "Jane tries to sign the form to pardon the ex-CEO but her grade is too low." << std::endl;
	try {
	form3.beSigned(jane);
	}
	catch (std::exception& e) {
	std::cout << e.what() << std::endl;
	}

	std::cout << "Jake signs the form to pardon the ex-CEO." << std::endl;
	form3.beSigned(jake);
	std::cout << form3 << std::endl;

	std::cout << "Jane tries to execute the form to pardon the ex-CEO but her grade is too low." << std::endl;
	try {
	form3.execute(jane);
	}
	catch (std::exception& e) {
	std::cout << e.what() << std::endl;
	}

	std::cout << "Jake tries to execute the form to pardon the ex-CEO." << std::endl;
	try {
	form3.execute(jake);
	}
	catch (std::exception& e) {
	std::cout << e.what() << std::endl;
	}

	return 0;
}
