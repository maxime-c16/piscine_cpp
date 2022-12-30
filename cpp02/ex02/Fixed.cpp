/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:19 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/30 14:42:01 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//const & dest

Fixed::Fixed( void ) : _fixed(0)
{
}

Fixed::Fixed( Fixed const &ref ) : _fixed(ref.getRawBits())
{
}

Fixed::Fixed( int const value ) : _fixed(value << _nbBits)
{
}

Fixed::Fixed( float const value ) : _fixed(roundf(value * (1 << _nbBits)))
{
}

Fixed::~Fixed( void )
{
}

//operator overload

Fixed	&Fixed::operator=( Fixed const &ref )
{
	this->_fixed = ref.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &ofs, Fixed const &ref )
{
	ofs << ref.toFloat();
	return (ofs);
}

bool	Fixed::operator<( Fixed const &ref ) const
{
	return ((this->_fixed < ref._fixed) ? 1 : 0);
}

bool	Fixed::operator<=( Fixed const &ref ) const
{
	return ((this->_fixed <= ref._fixed) ? 1 : 0);
}

bool	Fixed::operator>( Fixed const &ref ) const
{
	return ((this->_fixed > ref._fixed) ? 1 : 0);
}

bool	Fixed::operator>=( Fixed const &ref ) const
{
	return ((this->_fixed >= ref._fixed) ? 1 : 0);
}

bool	Fixed::operator==( Fixed const &ref ) const
{
	return ((this->_fixed == ref._fixed) ? 1 : 0);
}

bool	Fixed::operator!=( Fixed const &ref ) const
{
	return ((this->_fixed != ref._fixed) ? 1 : 0);
}

Fixed	Fixed::operator+( Fixed const &ref )
{
	return (Fixed(this->_fixed + ref._fixed));
}

Fixed	Fixed::operator-( Fixed const &ref )
{
	return (Fixed(this->_fixed - ref._fixed));
}

Fixed	Fixed::operator*( Fixed const &ref )
{
	return (Fixed(this->toFloat() * ref.toFloat()));
}

Fixed	Fixed::operator/( Fixed const &ref )
{
	return (Fixed(this->toFloat() / ref.toFloat()));
}

Fixed	&Fixed::operator++( void )
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed cpy( *this );

	operator++();
	return (cpy);
}

Fixed	&Fixed::operator--( void )
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed cpy( *this );

	operator--();
	return (cpy);
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

Fixed const	&Fixed::min( Fixed const &ref1, Fixed const &ref2 )
{
	return ((ref1 < ref2) ? ref1 : ref2);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	return ((a < b) ? a : b);
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}
