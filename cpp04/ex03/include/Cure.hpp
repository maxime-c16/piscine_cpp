/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:34:55 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/15 17:37:26 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure &ref );
		~Cure( void );
		Cure &operator=( const Cure &ref );

		AMateria *clone( void ) const;
		void use( ICharacter &target );
};

#endif
