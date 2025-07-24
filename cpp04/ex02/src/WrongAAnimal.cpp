/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:03:55 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:06:12 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal( void ) : _type("WrongAAnimal")
{
	std::cout << "WrongAAnimal default constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal( const WrongAAnimal &ref ) : _type(ref._type)
{
	std::cout << "WrongAAnimal copy constructor called" << std::endl;
}

WrongAAnimal::~WrongAAnimal( void )
{
	std::cout << "WrongAAnimal destructor called" << std::endl;
}

WrongAAnimal	&WrongAAnimal::operator=( const WrongAAnimal &ref )
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

void	WrongAAnimal::makeSound( void ) const
{
	std::cout << "WrongAAnimal makes a sound" << std::endl;
}

std::string	WrongAAnimal::getType( void ) const
{
	return _type;
}
