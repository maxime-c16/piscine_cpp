/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:58:23 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/11 11:31:18 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "[getRawBits member function called] ";
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "[setRawBits member function called]" << std::endl;
	_value = raw;
}

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "Copy constructor called" << std::endl;
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
