/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:12:01 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 17:44:45 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	first("Stack");
	Zombie	*tmp;

	first.announce();
	tmp = first.newZombie("Heap");

	tmp->randomChump("stackosaurus");
	tmp->announce();

	first.randomChump("heaposaurus");

	delete tmp;
	return (0);
}
