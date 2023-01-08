/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:22:24 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/08 00:43:33 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form constructor called" << std::endl;
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( Form const & src ) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	*this = src;
}

Form::~Form( void )
{
	std::cout << "Form destructor called" << std::endl;
}

Form		&Form::operator=( Form const &ref )
{
	this->_signed = ref._signed;
	return (*this);
}

int		Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int		Form::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
}

std::string	Form::getName( void ) const
{
	return (this->_name);
}

bool	Form::getSigned( void ) const
{
	return (this->_signed);
}

void	Form::beSigned( Bureaucrat const &bureaucrat )
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

