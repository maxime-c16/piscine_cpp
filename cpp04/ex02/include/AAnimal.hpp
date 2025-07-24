/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:27:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 10:28:56 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal( void );
		AAnimal( const AAnimal &ref );
		virtual ~AAnimal( void );

		AAnimal	&operator=( const AAnimal &ref );

		virtual void			makeSound( void ) const = 0;
		virtual std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif
