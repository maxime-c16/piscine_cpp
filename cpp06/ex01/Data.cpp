/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:07:38 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/14 19:12:18 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )
{
	std::cout << "Data constructor called" << std::endl;
}

Data::Data( bool alive )
{
	std::cout << "Data constructor called" << std::endl;
	this->_alive = alive;
}

Data::Data( Data const & src)
{
	std::cout << "Data copy constructor called" << std::endl;
	*this = src;
}

Data::~Data( void )
{
	std::cout << "Data destructor called" << std::endl;
}

Data	&Data::operator=( Data const &ref )
{
	std::cout << "Data assignation operator called" << std::endl;
	this->_alive = ref._alive;
	return (*this);
}

void	Data::setAlive( bool alive )
{
	this->_alive = alive;
}

bool	Data::getAlive( void ) const
{
	return (this->_alive);
}
