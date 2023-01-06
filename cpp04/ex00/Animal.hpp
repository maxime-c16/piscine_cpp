/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:27:22 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/05 22:05:01 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal( void );
		Animal( Animal const &ref );
		virtual ~Animal( void );

		Animal&	operator=( Animal const &ref );

		virtual void		makeSound( void ) const;
		virtual std::string	getType( void ) const;

	protected:
		std::string	_type;
};

#endif
