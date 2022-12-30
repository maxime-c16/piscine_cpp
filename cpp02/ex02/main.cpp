/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:19:46 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/30 14:24:14 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed const c( Fixed( 0.45f ) / Fixed( 2 ) );
	// Fixed const d( Fixed( -5.05f ) + Fixed( 10 ) );
	// Fixed const e( Fixed( 3.12f ) - Fixed( 1.05f ) );

	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "c = " << c << std::endl;
	// std::cout << "d = " << d << std::endl;
	// std::cout << "e = " << e << std::endl;

	// std::cout << "++a = " << ++a << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a++ = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;

	// std::cout << "a < b = " << ((a < b) ? "true" : "false") << std::endl;
	// std::cout << "a > b = " << ((a > b) ? "true" : "false") << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}
