/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:19:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/25 13:10:44 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Colors.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Default"), _grade(150)
{
	_checkGrade(_grade);
	std::cout << DIM << "📋 Bureaucrat " << BOLD_WHITE << _name << RESET << DIM << " created with default constructor, grade: " << BOLD_YELLOW << _grade << RESET << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &ref ) : _name(ref._name), _grade(ref._grade)
{
	_checkGrade(_grade);
	std::cout << DIM << "📋 Bureaucrat " << BOLD_WHITE << _name << RESET << DIM << " created with copy constructor, grade: " << BOLD_YELLOW << _grade << RESET << std::endl;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : _name(name), _grade(grade)
{
	_checkGrade(_grade);
	std::cout << DIM << "📋 Bureaucrat " << BOLD_WHITE << _name << RESET << DIM << " created with parameterized constructor, grade: " << BOLD_YELLOW << _grade << RESET << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << DIM << "🗑️  Bureaucrat " << BOLD_WHITE << _name << RESET << DIM << " destroyed." << RESET << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &ref )
{
	if (this != &ref)
	{
		_copy(ref);
	}
	return *this;
}

const std::string	&Bureaucrat::getName( void ) const
{
	return _name;
}

int	Bureaucrat::getGrade( void ) const
{
	return _grade;
}

void	Bureaucrat::incrementGrade( void )
{
	_setGrade(_grade - 1);
	std::cout << GREEN << "⬆️  Bureaucrat " << BOLD_WHITE << _name << RESET << GREEN << " incremented grade to " << BOLD_YELLOW << _grade << RESET << std::endl;
}

void	Bureaucrat::decrementGrade( void )
{
	_setGrade(_grade + 1);
	std::cout << RED << "⬇️  Bureaucrat " << BOLD_WHITE << _name << RESET << RED << " decremented grade to " << BOLD_YELLOW << _grade << RESET << std::endl;
}

void	Bureaucrat::_checkGrade( int grade ) const
{
	if (grade < _minGrade)
		throw GradeTooHighException();
	if (grade > _maxGrade)
		throw GradeTooLowException();
}

void	Bureaucrat::_setGrade( int grade )
{
	_checkGrade(grade);
	_grade = grade;
}

void	Bureaucrat::_copy( const Bureaucrat &ref )
{
	_name = ref._name;
	_grade = ref._grade;
	_checkGrade(_grade);
}

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &ref )
{
	os << BOLD_WHITE << ref.getName() << RESET << ", bureaucrat grade " << BOLD_YELLOW << ref.getGrade() << RESET;
	return os;
}
