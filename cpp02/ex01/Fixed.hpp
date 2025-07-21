/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:53:19 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 18:17:06 by macauchy         ###   ########.fr       */
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

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;


		private:
		int					_value;
		static const int	_fractionalBits = 8;
	};

std::ostream &operator<<( std::ostream &os, const Fixed &fixed );

#endif
