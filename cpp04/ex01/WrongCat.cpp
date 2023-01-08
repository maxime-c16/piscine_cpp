/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:52:30 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 21:53:08 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal()
{
	_type = type;
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &ref ) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = ref;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &ref )
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->_type = ref._type;
	return (*this);
}

//make a wrongCat say something weird
