/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:26:09 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 09:46:36 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &ref ) : Animal(ref)
{
	_type = ref._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=( const Dog &ref )
{
	if (this != &ref)
	{
		Animal::operator=(ref);
		this->_type = ref._type;
	}
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof!" << std::endl;
}

std::string	Dog::getType( void ) const
{
	return this->_type;
}
