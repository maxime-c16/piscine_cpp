/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:12:17 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:31:00 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/ICharacter.hpp"

#define C_MAGENTA "\033[35m"
#define C_RESET "\033[0m"
#define C_RED "\033[31m"
#define C_YELLOW "\033[33m"
#define C_GREEN "\033[32m"

Character::Character( void ) : _name("Default")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << C_MAGENTA << "Character created with default constructor: " << _name << C_RESET << std::endl;
}

Character::Character( const Character &ref ) : _name(ref._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (ref._inventory[i])
			_inventory[i] = ref._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	std::cout << C_MAGENTA << "Character copied: " << _name << C_RESET << std::endl;
}

Character::Character( const std::string &name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << C_MAGENTA << "Character created with name: " << _name << C_RESET << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << C_MAGENTA << "Character destroyed: " << _name << C_RESET << std::endl;
}

Character &Character::operator=( const Character &ref )
{
	if (this != &ref)
	{
		_name = ref._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (ref._inventory[i])
				_inventory[i] = ref._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string	const &Character::getName( void ) const
{
	return _name;
}

void	Character::equip( AMateria *m )
{
	if (!m)
	{
		std::cout << "Cannot equip null materia." << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << C_GREEN << _name << " equipped " << m->getType() << " in slot " << i << C_RESET << std::endl;
			return;
		}
	}
	std::cout << C_RED << _name << "'s inventory is full. Cannot equip " << m->getType() << C_RESET << std::endl;
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << C_RED << "Invalid index for unequip" << C_RESET << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << C_YELLOW << "No materia in slot " << idx << " to unequip" << C_RESET << std::endl;
		return;
	}
	
	std::cout << C_YELLOW << _name << " unequipped " << _inventory[idx]->getType() << " from slot " << idx << C_RESET << std::endl;
	_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter &target )
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << C_RED << "Invalid index for use" << C_RESET << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << C_YELLOW << "No materia in slot " << idx << " to use" << C_RESET << std::endl;
		return;
	}
	_inventory[idx]->use(target);
	std::cout << _name << " used " << _inventory[idx]->getType() << " on " << target.getName() << "." << std::endl;
}
