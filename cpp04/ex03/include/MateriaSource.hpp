/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:22:45 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 15:25:46 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource &ref );
		~MateriaSource( void );

		MateriaSource	&operator=( const MateriaSource &ref );

		void	learnMateria( AMateria *m );
		AMateria	*createMateria( const std::string &type );

	private:
		AMateria	*_materias[4];
		int		_count;
		void	_clearMaterias( void );
		void	_copyMaterias( const MateriaSource &ref );
};

#endif
