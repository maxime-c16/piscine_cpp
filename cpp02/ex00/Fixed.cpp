/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:19 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/29 10:42:13 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed &ref )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed = ref.getRawBits();
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &ref )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = ref.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called with int " << raw << std::endl;
	this->_fixed = raw;
}
