/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:10:35 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 14:12:03 by mcauchy          ###   ########.fr       */
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

	std::cout << jane << std::endl;
	std::cout << john << std::endl;
	std::cout << jim << std::endl;
	std::cout << jake << std::endl;

	std::cout << "The company is looking to spruce up the office with some shrubbery." << std::endl;
	ShrubberyCreationForm form1("office");
	std::cout << form1 << std::endl;

	std::cout << "Jane tries to sign the form to plant the shrubbery but her grade is too low." << std::endl;
	try {
		form1.beSigned(jane);
	}
	catch (Form::GradeTooLowException& e) {
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
	catch (Form::GradeTooLowException& e) {
		std::cout << e.what() << std::end
	}

	

	return 0;
}
