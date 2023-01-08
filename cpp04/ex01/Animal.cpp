/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:34:57 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:02:13 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const &ref )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=( Animal const &ref )
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal making generic sound" << std::endl;
}
