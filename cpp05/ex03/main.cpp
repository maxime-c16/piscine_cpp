#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

#define ROBOTOMY_REQUEST_FORM 0
#define SHRUBBERY_CREATION_FORM 1
#define PRESIDENTIAL_PARDON_FORM 2

int main()
{
	Intern intern;
	Bureaucrat jane("Jane", 3);
	Bureaucrat john("John", 145);

	AForm* rrf = intern.makeForm(ROBOTOMY_REQUEST_FORM, "Bender");
	std::cout << std::endl << *rrf << std::endl;

	std::cout << std::endl << "Jane tries to sign the RobotomyRequestForm..." << std::endl;
	try
	{
		rrf->beSigned(jane);
	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << std::endl << "Jane tries to execute the RobotomyRequestForm..." << std::endl;
	try
	{
		rrf->execute(jane);
	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	john.incrementGrade();
	std::cout << std::endl << john << std::endl;

	try {
		rrf->beSigned(john);
	}
	catch (std::exception& e) {
		std::cout << std::endl << e.what() << std::endl;
	}

	try {
		rrf->execute(john);
	}
	catch (std::exception& e) {
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << std::endl << *rrf << std::endl;

	AForm* scf = intern.makeForm(SHRUBBERY_CREATION_FORM, "office");

	std::cout << std::endl << *scf << std::endl;

	std::cout << std::endl << "Jane tries to sign the ShrubberyCreationForm..." << std::endl;
	try
	{
		scf->beSigned(jane);
	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << std::endl << "Jane tries to execute the ShrubberyCreationForm..." << std::endl;
	try
	{
		scf->execute(jane);
	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << std::endl << "John tries to sign the ShrubberyCreationForm..." << std::endl;
	try {
		scf->beSigned(john);
	}
	catch (std::exception& e) {
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << *scf << std::endl;

	AForm* ppf = intern.makeForm(PRESIDENTIAL_PARDON_FORM, "Bender");

	std::cout << *ppf << std::endl;

	std::cout << std::endl << "Jane tries to sign the PresidentialPardonForm..." << std::endl;
	try
	{
		ppf->beSigned(jane);
	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << std::endl << "Jane tries to execute the PresidentialPardonForm..." << std::endl;
	try
	{
		ppf->execute(jane);
	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << std::endl << "John tries to sign the PresidentialPardonForm..." << std::endl;
	try {
		ppf->beSigned(john);
	}
	catch (std::exception& e) {
		std::cout << std::endl << e.what() << std::endl;
	}

	std::cout << *ppf << std::endl;

	std::cout << std::endl << "Try to create a form that doesn't exist..." << std::endl;
	try
	{
		intern.makeForm(42, "Bender");

	}
	catch (std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}

	delete rrf;
	delete scf;
	delete ppf;

	return 0;
}
