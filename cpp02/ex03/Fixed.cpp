/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:58:23 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 19:13:31 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed( const int value )
{
	_value = value * (1 << _fractionalBits);
}

Fixed::Fixed( const float value )
{
	_value = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}

Fixed::Fixed( const Fixed &other ) : _value(other.getRawBits())
{
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=( const Fixed &other )
{
	if (this != &other)
		_value = other._value;
	return *this;
}

Fixed	Fixed::operator+( const Fixed &other ) const
{
	return *(new Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-( const Fixed &other ) const
{
	return *(new Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*( const Fixed &other ) const
{
	return *(new Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &other ) const
{
	if (other.getRawBits() == 0)
	{
		std::cerr << "Error: Division by zero!" << std::endl;
		exit(EXIT_FAILURE);
	}
	return *(new Fixed(this->toFloat() / other.toFloat()));
}

bool Fixed::operator==( const Fixed &other ) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=( const Fixed &other ) const
{
	return !(*this == other);
}

bool Fixed::operator<( const Fixed &other ) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<=( const Fixed &other ) const
{
	return *this < other || *this == other;
}

bool Fixed::operator>( const Fixed &other ) const
{
	return !(*this <= other);
}

bool Fixed::operator>=( const Fixed &other ) const
{
	return !(*this < other);
}

Fixed	&Fixed::operator++( void )
{
	_value += (1 << _fractionalBits);
	return *this;
}

Fixed Fixed::operator++( int )
{
	Fixed temp(*this);
	_value += (1 << _fractionalBits);
	return temp;
}

Fixed	&Fixed::operator--( void )
{
	_value -= (1 << _fractionalBits);
	return *this;
}

Fixed Fixed::operator--( int )
{
	Fixed temp(*this);
	_value -= (1 << _fractionalBits);
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

float	Fixed::toFloat( void ) const
{
	return static_cast<float>(_value) / static_cast<float>(1 << _fractionalBits);
}

int	Fixed::toInt( void ) const
{
	return _value >> _fractionalBits;
}

std::ostream &operator<<( std::ostream &os, const Fixed &fixed )
{
	os << fixed.toFloat();
	return os;
}
