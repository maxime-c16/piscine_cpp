/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:59:25 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 14:02:27 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	AForm("Presidential Pardon Form", 25, 5), _target("default")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	AForm(other), _target(other._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	if (this != &ref)
	{
		AForm::operator=(ref);
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!getSigned())
	{
		throw FormNotSignedException();
	}
	if (executor.getGrade() > getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	std::cout << executor.getName() << " has executed Presidential Pardon Form on " << _target << std::endl;
}


