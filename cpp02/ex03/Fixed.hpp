/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:53:19 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 18:54:36 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( const Fixed &other );
		Fixed( const int value );
		Fixed( const float value );
		~Fixed( void );

		Fixed	&operator=( const Fixed &other );

		Fixed	operator+( const Fixed &other ) const;
		Fixed	operator-( const Fixed &other ) const;
		Fixed	operator*( const Fixed &other ) const;
		Fixed	operator/( const Fixed &other ) const;

		bool	operator==( const Fixed &other ) const;
		bool	operator!=( const Fixed &other ) const;
		bool	operator<( const Fixed &other ) const;
		bool	operator<=( const Fixed &other ) const;
		bool	operator>( const Fixed &other ) const;
		bool	operator>=( const Fixed &other ) const;

		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed	&min( Fixed &a, Fixed &b );
		static const Fixed	&min( const Fixed &a, const Fixed &b );
		static Fixed	&max( Fixed &a, Fixed &b );
		static const Fixed	&max( const Fixed &a, const Fixed &b );


		private:
		int					_value;
		static const int	_fractionalBits = 8;
	};

std::ostream &operator<<( std::ostream &os, const Fixed &fixed );

#endif
