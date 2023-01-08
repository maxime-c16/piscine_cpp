/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:51:08 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 13:56:53 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	AForm("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	if (this != &ref)
	{
		AForm::operator=(ref);
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!getSigned())
	{
		throw FormNotSignedException();
	}
	if (executor.getGrade() > getGradeToExecute())
	{
		throw GradeTooLowException();
	}
	std::cout << "Drilling noises..." << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << _target << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << "Robotomy failed." << std::endl;
	}
}
