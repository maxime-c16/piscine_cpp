/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:06:22 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:08:40 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &ref ) : WrongAnimal(ref)
{
	_type = ref._type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &ref )
{
	if (this != &ref)
	{
		WrongAnimal::operator=(ref);
		this->_type = ref._type;
	}
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongMeow!" << std::endl;
}

std::string	WrongCat::getType( void ) const
{
	return this->_type;
}
