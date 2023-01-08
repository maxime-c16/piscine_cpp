/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:39:51 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 11:11:15 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal(), _brain(NULL)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(), _brain(NULL)
{
	_type = type;
	_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const &ref ) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = ref;
}

Dog::~Dog( void )
{
	if (_brain)
		delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=( Dog const &ref )
{
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof woof" << std::endl;
}
