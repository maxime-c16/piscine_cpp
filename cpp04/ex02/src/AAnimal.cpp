/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:32:46 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 09:36:35 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &ref ) : _type(ref._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=( const AAnimal &ref )
{
	if (this != &ref)
	{
		this->_type = ref._type;
	}
	return *this;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal makes a sound" << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return this->_type;
}
