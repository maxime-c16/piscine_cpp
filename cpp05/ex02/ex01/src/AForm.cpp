/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:26:41 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/27 13:24:31 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Colors.hpp"

AForm::AForm( void ) : _name("Unnamed Form"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << DIM << "📄 AForm " << BOLD_WHITE << _name << RESET << DIM
		<< " created with default constructor, sign grade: " << BOLD_YELLOW
		<< _signGrade << RESET << DIM << ", exec grade: " << BOLD_YELLOW
		<< _execGrade << RESET << std::endl;
}

AForm::AForm( const AForm &ref )
	: _name(ref._name), _signed(ref._signed), _signGrade(ref._signGrade), _execGrade(ref._execGrade)
{
	std::cout << DIM << "📄 AForm " << BOLD_WHITE << _name << RESET << DIM
		<< " created with copy constructor, sign grade: " << BOLD_YELLOW
		<< _signGrade << RESET << DIM << ", exec grade: " << BOLD_YELLOW
		<< _execGrade << RESET << std::endl;
}

AForm::AForm( const std::string &name, int signGrade, int execGrade )
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	std::cout << DIM << "📄 AForm " << BOLD_WHITE << _name << RESET << DIM
		<< " created with parameterized constructor, sign grade: " << BOLD_YELLOW
		<< _signGrade << RESET << DIM << ", exec grade: " << BOLD_YELLOW
		<< _execGrade << RESET << std::endl;
}

AForm::~AForm( void )
{
	std::cout << DIM << "🗑️  AForm " << BOLD_WHITE << _name << RESET << DIM
		<< " destroyed." << RESET << std::endl;
}

AForm	&AForm::operator=( const AForm &ref )
{
	if (this != &ref)
	{
		_signed = ref._signed;
	}
	return *this;
}

const std::string	&AForm::getName( void ) const
{
	return _name;
}

bool	AForm::isSigned( void ) const
{
	return _signed;
}

int	AForm::getSignGrade( void ) const
{
	return _signGrade;
}

int	AForm::getExecGrade( void ) const
{
	return _execGrade;
}

void	AForm::beSigned( const Bureaucrat &bureaucrat )
{
	if (bureaucrat.getGrade() > _signGrade)
	{
		throw GradeTooLowException();
	}
	_signed = true;
	std::cout << GREEN << "✅ AForm " << BOLD_WHITE << _name << RESET
		<< GREEN << " signed by Bureaucrat " << BOLD_WHITE << bureaucrat.getName()
		<< RESET << GREEN << " with grade " << BOLD_YELLOW << bureaucrat.getGrade()
		<< RESET << std::endl;
}

void	AForm::execute( const Bureaucrat &executor ) const
{
	if (!_signed)
	{
		throw std::runtime_error("Form is not signed!");
	}
	if (executor.getGrade() > _execGrade)
	{
		throw GradeTooLowException();
	}
	std::cout << CYAN << "Executing form " << BOLD_WHITE << _name << RESET
		<< CYAN << " by Bureaucrat " << BOLD_WHITE << executor.getName()
		<< RESET << CYAN << " with grade " << BOLD_YELLOW << executor.getGrade()
		<< RESET << std::endl;

	// Call the pure virtual function implemented by derived classes
	executeAction();
}

std::ostream	&operator<<( std::ostream &os, const AForm &form )
{
	os << "AForm '" << form.getName() << "' [signed: " << (form.isSigned() ? "Yes" : "No")
		<< ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << "]";
	return os;
}
