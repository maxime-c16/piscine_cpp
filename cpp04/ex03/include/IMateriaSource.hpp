/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:21:27 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:01:47 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>

// Forward declaration to avoid circular dependency
class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource( void ) {}
		virtual void	learnMateria( AMateria *m ) = 0;
		virtual AMateria	*createMateria( const std::string &type ) = 0;
};

#endif
