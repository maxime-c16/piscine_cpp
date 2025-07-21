/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:02:08 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 19:04:48 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point &other );
		~Point( void );

		Point	&operator=( const Point &other );
		bool	operator==( const Point &other ) const;
		bool	operator!=( const Point &other ) const;

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;

		static bool	bsp( const Point a, const Point b, const Point c, const Point point );

		private:
			Fixed	_x;
			Fixed	_y;
};

#endif
