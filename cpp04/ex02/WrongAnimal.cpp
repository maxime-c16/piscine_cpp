/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:48:55 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:03:10 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type )
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	_type = type;
}

WrongAnimal::WrongAnimal( WrongAnimal const &ref )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = ref;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &ref )
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal making generic sound" << std::endl;
}
