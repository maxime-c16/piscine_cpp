/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:44:52 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:02:05 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal()
{
	_type = type;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const &ref ) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = ref;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=( Cat const &ref )
{
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow meow" << std::endl;
}
