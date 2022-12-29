/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:17 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/28 18:41:18 by mcauchy          ###   ########.fr       */
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
		Fixed( Fixed &ref );
		~Fixed( void );

		Fixed	&operator=( Fixed const &ref );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:

		int					_fixed;
		static const int	_nbBits = 8;
};

#endif
