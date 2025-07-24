/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:40:00 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:48:21 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat( void ) : AAnimal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &ref ) : AAnimal(ref)
{
	_type = ref._type;
	_brain = new Brain(*ref._brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=( const Cat &ref )
{
	if (this != &ref)
	{
		AAnimal::operator=(ref);
		this->_type = ref._type;
		delete _brain;
		_brain = new Brain(*ref._brain);
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

Brain*	Cat::getBrain( void ) const
{
	return _brain;
}
