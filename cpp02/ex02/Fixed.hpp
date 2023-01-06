/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:17 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 11:25:29 by mcauchy          ###   ########.fr       */
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
		Fixed( Fixed const &ref );
		Fixed( int const value );
		Fixed( float const value );
		 ~Fixed( void );

		Fixed	&operator=( Fixed const &ref );

		Fixed	operator+( Fixed const &ref );
		Fixed	operator-( Fixed const &ref );
		Fixed	operator/( Fixed const &ref );
		Fixed	operator*( Fixed const &ref );

		bool	operator<( Fixed const &ref ) const;
		bool	operator>( Fixed const &ref ) const;
		bool	operator<=( Fixed const &ref ) const;
		bool	operator>=( Fixed const &ref ) const;
		bool	operator==( Fixed const &ref ) const;
		bool	operator!=( Fixed const &ref ) const;

		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed const	&min( Fixed const &ref1, Fixed const &ref2 );
		static Fixed		&min( Fixed &ref1, Fixed &ref2 );
		static Fixed const	&max( Fixed const &ref1, Fixed const &ref2 );
		static Fixed		&max( Fixed &ref1, Fixed &ref2 );

	private:

		int					_fixed;
		static const int	_nbBits = 8;
};

std::ostream	&operator<<( std::ostream &ofs, Fixed const &ref );

#endif
