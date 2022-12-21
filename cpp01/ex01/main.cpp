/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:12:01 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 18:14:36 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	first("Bub");
	Zombie	*horde;

	first.announce();
	horde = first.zombieHorde(5, "bubarausor");

	delete [] horde;

	return (0);
}
