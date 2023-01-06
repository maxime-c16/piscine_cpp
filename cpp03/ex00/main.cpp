/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 11:48:38 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/31 11:53:43 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clapTrap("Fred");

	// Test attack
	clapTrap.attack("Bob");
	clapTrap.attack("Alice");

	// Test takeDamage
	clapTrap.takeDamage(5);
	clapTrap.takeDamage(10);

	// Test beRepaired
	clapTrap.beRepaired(10);
	clapTrap.beRepaired(5);

	// Test energy points
	for (int i = 0; i < 10; i++)
		clapTrap.attack("Bob");

  return (0);
}
