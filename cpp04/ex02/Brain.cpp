/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:54:41 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/06 10:57:29 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=( Brain const &ref )
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}
