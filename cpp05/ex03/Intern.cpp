/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:24:04 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/09 08:42:30 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern	&other)
{
	*this = other;
}

Intern::~Intern( void )
{
	std::cout << "Intern destroyed" << std::endl;
}

Intern	&Intern::operator=(const Intern	&other)
{
	(void)other;
	return *this;
}

AForm	*Intern::makeForm(int type, std::string target)
{
	AForm *form = NULL;
	switch (type)
	{
		case 0:
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			break;
		case 1:
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			break;
		default:
			throw FormTypeDoesNotExist();
	}
	return form;
}

