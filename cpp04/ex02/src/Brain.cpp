/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:26:28 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:28:34 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = "";
}

Brain::Brain( const Brain &ref )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		_ideas[i] = ref._ideas[i];
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=( const Brain &ref )
{
	if (this != &ref)
	{
		for (int i = 0; i < 100; ++i)
			_ideas[i] = ref._ideas[i];
	}
	return *this;
}

std::string	Brain::getIdea( int index ) const
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Index out of bounds" << std::endl;
		return "";
	}
	return _ideas[index];
}

void	Brain::setIdea( int index, const std::string &idea )
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Index out of bounds" << std::endl;
		return;
	}
	_ideas[index] = idea;
}
