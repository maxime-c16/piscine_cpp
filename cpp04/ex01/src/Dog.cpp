/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:26:09 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:37:06 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog( void ) : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &ref ) : Animal(ref)
{
	_type = ref._type;
	_brain = new Brain(*ref._brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=( const Dog &ref )
{
	if (this != &ref)
	{
		Animal::operator=(ref);
		this->_type = ref._type;
		delete _brain;
		_brain = new Brain(*ref._brain);
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

Brain*	Dog::getBrain( void ) const
{
	return _brain;
}
