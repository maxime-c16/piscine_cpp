/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:02:12 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/11 11:29:43 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;

	a.setRawBits(42);
	std::cout << "a after setRawBits: " << a.getRawBits() << std::endl;
	std::cout << "b after a change: " << b.getRawBits() << std::endl;
	std::cout << "c after a change: " << c.getRawBits() << std::endl;
}
