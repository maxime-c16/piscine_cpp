/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:39:51 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:02:23 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal()
{
	_type = type;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const &ref ) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = ref;
}

Dog::~Dog( void )
{
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
