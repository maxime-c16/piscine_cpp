/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:00 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/15 15:17:15 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) : Animal()
{
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &ref ) : Animal(ref)
{
	_type = ref._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=( const Cat &ref )
{
	if (this != &ref)
	{
		Animal::operator=(ref);
		this->_type = ref._type;
	}
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow!" << std::endl;
}

std::string	Cat::getType( void ) const
{
	return this->_type;
}
