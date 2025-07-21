/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:08:19 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 14:23:20 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cerr << C_RED "Error: N must be greater than 0." C_RESET << std::endl;
		return nullptr;
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return horde;
}
