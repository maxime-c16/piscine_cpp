/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:59:33 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/15 17:37:22 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( const Ice &ref );
		~Ice( void );

		Ice	&operator=( const Ice &ref );
		
		AMateria	*clone( void ) const;
		void		use( ICharacter &target );
};

#endif
