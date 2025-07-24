/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:26:42 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:31:00 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

// Color definitions
#define C_BLUE "\033[34m"
#define C_RESET "\033[0m"
#define C_GREEN "\033[32m"
#define C_RED "\033[31m"
#define C_YELLOW "\033[33m"

MateriaSource::MateriaSource( void ) : _count(0)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	std::cout << C_BLUE << "MateriaSource created" << C_RESET << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource &ref ) : _count(ref._count)
{
	_copyMaterias(ref);
	std::cout << "MateriaSource copied." << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	_clearMaterias();
	std::cout << "MateriaSource destroyed." << std::endl;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &ref )
{
	if (this != &ref)
	{
		_clearMaterias();
		_count = ref._count;
		_copyMaterias(ref);
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria *m )
{
	if (!m)
	{
		std::cout << C_RED << "Cannot learn null materia" << C_RESET << std::endl;
		return;
	}
	if (_count >= 4)
	{
		std::cout << C_RED << "MateriaSource is full. Cannot learn " << m->getType() << C_RESET << std::endl;
		return;
	}
	_materias[_count] = m->clone();
	_count++;
	std::cout << C_GREEN << "MateriaSource learned " << m->getType() << C_RESET << std::endl;
}

AMateria	*MateriaSource::createMateria( const std::string &type )
{
	for (int i = 0; i < _count; i++)
	{
		if (_materias[i]->getType() == type)
		{
			std::cout << C_GREEN << "MateriaSource created " << type << " materia" << C_RESET << std::endl;
			return _materias[i]->clone();
		}
	}
	std::cout << C_YELLOW << "MateriaSource could not create " << type << " materia" << C_RESET << std::endl;
	return NULL;
}

void	MateriaSource::_clearMaterias( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
		{
			delete _materias[i];
			_materias[i] = NULL;
		}
	}
}

void	MateriaSource::_copyMaterias( const MateriaSource &ref )
{
	for (int i = 0; i < 4; i++)
	{
		if (i < ref._count && ref._materias[i])
			_materias[i] = ref._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}
