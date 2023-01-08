/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:52:45 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 13:47:37 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	if (this != &ref)
	{
		AForm::operator=(ref);
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!getSigned()) {
		throw FormNotSignedException();
	}
	if (executor.getGrade() > getGradeToExecute()) {
		throw GradeTooLowException();
	}
	std::string tree = generateRandomTree();
	std::ofstream file(_target + "_shrubbery");
	file << tree;
	file.close();
}

std::string ShrubberyCreationForm::generateRandomTree( void ) const
{
	std::string tree;
	srand(time(0));
	int treeHeight = rand() % 5 + 3;
	for (int i = 0; i < treeHeight; i++) {
		for (int j = 0; j < treeHeight - i - 1; j++) {
		tree += " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
		tree += "*";
		}
		tree += "\n";
	}
	for (int i = 0; i < treeHeight / 2 + 1; i++) {
		for (int j = 0; j < treeHeight - 1; j++) {
		tree += " ";
		}
		tree += "|\n";
	}

	for (int i = 0; i < treeHeight; i++)
	{
		int numLeaves = rand() % 5 + 1;

		for (int j = 0; j < numLeaves; j++)
		{
			tree += "X";
		}

		tree += "\n";
	}

	return tree;
}
