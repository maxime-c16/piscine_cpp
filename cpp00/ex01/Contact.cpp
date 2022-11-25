/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:42:31 by mcauchy           #+#    #+#             */
/*   Updated: 2022/11/25 18:43:00 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact(void)
{
	std::cout << "Contact: constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact: destructor called" << std::endl;
}

void	Contact::setFN(std::string str)
{
	this->_first_name = str;
}

void	Contact::setLN(std::string str)
{
	this->_last_name = str;
}

void	Contact::setNN(std::string str)
{
	this->_nickname = str;
}

void	Contact::setPN(std::string str)
{
	this->_phone_number = str;
}

void	Contact::setDS(std::string str)
{
	this->_darkest_secret = str;
}

std::string	Contact::getFN(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLN(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNN(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPN(void) const
{
	return (this->_phone_number);
}

std::string	Contact::getDS(void) const
{
	return (this->_darkest_secret);
}

