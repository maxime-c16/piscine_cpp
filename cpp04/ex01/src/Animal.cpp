/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:32:46 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 09:36:35 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal( void ) : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal &ref ) : _type(ref._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal &ref )
{
	if (this != &ref)
	{
		this->_type = ref._type;
	}
	return *this;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal makes a sound" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}
