/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:27:30 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/24 16:01:52 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

// Forward declaration to avoid circular dependency
class ICharacter;

class AMateria
{
	public:
		AMateria( void );
		AMateria( const std::string &type );
		AMateria( const AMateria &ref );
		virtual ~AMateria( void );
		
		AMateria	&operator=( const AMateria &ref );

		std::string const &getType( void ) const;

		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter &target );

	protected:
		std::string	_type;
};

#endif
