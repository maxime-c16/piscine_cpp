/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:01:43 by mcauchy           #+#    #+#             */
/*   Updated: 2022/12/21 17:40:41 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// const & dest

Zombie::Zombie( std::string str ) : _name(str)
{
	std::cout << "Zombie " << _name << " created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

//announce

void	Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
