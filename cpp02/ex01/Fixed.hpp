/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:17 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/30 12:31:04 by mcauchy          ###   ########.fr       */
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

		Fixed			&operator=( Fixed const &ref );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_fixed;
		static const int	_nbBits = 8;
};

std::ostream	&operator<<( std::ostream &ofs, Fixed const &ref );

#endif
