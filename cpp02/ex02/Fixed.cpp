/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:58:23 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/11 11:39:58 by macauchy         ###   ########.fr       */
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

Fixed	Fixed::operator+( const Fixed &other ) const
{
	std::cout << "Addition operator called" << std::endl;
	return *(new Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-( const Fixed &other ) const
{
	std::cout << "Subtraction operator called" << std::endl;
	return *(new Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*( const Fixed &other ) const
{
	std::cout << "Multiplication operator called" << std::endl;
	return *(new Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &other ) const
{
	if (other.getRawBits() == 0)
	{
		std::cerr << "Error: Division by zero!" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "Division operator called" << std::endl;
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
