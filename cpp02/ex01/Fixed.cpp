/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:19 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/30 12:57:20 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//const & dest

Fixed::Fixed( void ) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &ref ) : _fixed(ref.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( int const value ) : _fixed(value << _nbBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const value ) : _fixed(roundf(value * (1 << _nbBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

//operator overload

Fixed	&Fixed::operator=( Fixed const &ref )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = ref.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &ofs, Fixed const &ref )
{
	ofs << ref.toFloat();
	return (ofs);
}

//member funct

int	Fixed::getRawBits( void ) const
{
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed >> _nbBits);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixed / (float)(1 << _nbBits));
}
