/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:18:14 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 11:18:15 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const &ref )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = ref;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=( AAnimal const &ref )
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal making generic sound" << std::endl;
}
