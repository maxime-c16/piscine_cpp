/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:53:19 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 17:58:12 by macauchy         ###   ########.fr       */
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
		~Fixed( void );

		Fixed	&operator=( const Fixed &other );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );


	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

#endif
