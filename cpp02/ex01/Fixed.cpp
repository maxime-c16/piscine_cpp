/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:58:23 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 18:16:55 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value )
{
	_value = value * (1 << _fractionalBits);
	std::cout << "Int constructor called with value: " << value << std::endl;
}

Fixed::Fixed( const float value )
{
	_value = static_cast<int>(roundf(value * (1 << _fractionalBits)));
	std::cout << "Float constructor called with value: " << value << std::endl;
}

Fixed::Fixed( const Fixed &other ) : _value(other.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &other )
{
	if (this != &other)
		_value = other._value;
	return *this;
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
