/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:27:05 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/22 09:38:36 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal( void );
		Animal( const Animal &ref );
		virtual ~Animal( void );

		Animal	&operator=( const Animal &ref );

		virtual void			makeSound( void ) const;
		virtual std::string		getType( void ) const;

	protected:
		std::string	_type;
};

#endif
