/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:04:55 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 19:12:14 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point( const Point &other ) : _x(other._x), _y(other._y)
{
}

Point::~Point(void)
{
}

Point	&Point::operator=( const Point &other )
{
	if (this != &other)
	{
		this->_x = other._x;
		this->_y = other._y;
	}
	return *this;
}

bool	Point::operator==( const Point &other ) const
{
	return (this->_x == other._x && this->_y == other._y);
}

bool	Point::operator!=( const Point &other ) const
{
	return !(*this == other);
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

