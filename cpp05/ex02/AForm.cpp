/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:42:00 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 12:42:26 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( AForm const & src ) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	*this = src;
}

AForm::~AForm( void )
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm		&AForm::operator=( AForm const &ref )
{
	this->_signed = ref._signed;
	return (*this);
}

int		AForm::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int		AForm::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
}

std::string	AForm::getName( void ) const
{
	return (this->_name);
}

bool	AForm::getSigned( void ) const
{
	return (this->_signed);
}

void	AForm::beSigned( Bureaucrat const &bureaucrat )
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream	&operator<<( std::ostream &o, AForm const &ref )
{
	o << "AForm " << ref.getName() << " is " << (ref.getSigned() ? "signed" : "unsigned") << ", grade to sign is " << ref.getGradeToSign() << ", grade to execute is " << ref.getGradeToExecute() << std::endl;
	return (o);
}

