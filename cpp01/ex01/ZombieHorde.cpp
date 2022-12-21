/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:49:16 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 18:13:34 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}
